#!/bin/bash
# verify_harvest.sh — "verify hard" for the harvest batch. Runs the candidate with the companion
# dialog oracle (FRN_DSP_LOG) AND an exhaustive null-jump sweep (FRN_BADPC_NOHALT logs every bad
# transfer instead of halting at the first). NO-REGRESSION PASS = (1) Cmd:80 still reached, and
# (2) NO [BADPC] line appears BEFORE the Cmd:80 line (a harvested forwarder introducing an earlier
# null-jump is the failure we are hunting). The known-good baseline has exactly one BADPC region:
# the B-6 crash AFTER Cmd:80. CLEAN: fresh bios, NO FLASH_SAVE.
set -u
HERE=/home/memorai/k10d-firmware-c
QEMU=/home/memorai/qemu-frn/build/qemu-system-frn
CAND=${CAND:-$HERE/cpu/out/candidate_FWDC162B.BIN}
SCR=${SCR:-/tmp/claude-1002/-home-memorai-memorAI/f4341860-fe67-4d9c-81be-c7c5c517f9ea/scratchpad}
WALL=${WALL:-120}
LOG="$SCR/verify_harvest.log"
cp -f "$CAND" "$SCR/vh_cand.bin"
echo "verify_harvest: bios=$(md5sum "$SCR/vh_cand.bin" | cut -c1-12) WALL=${WALL}s"
timeout "$WALL" env FRN_DSP_LOG=1 FRN_BADPC_NOHALT=1 \
  "$QEMU" -machine k10d -bios "$SCR/vh_cand.bin" -display none -serial null \
  >/dev/null 2>"$LOG"
# interleave markers in order of appearance
echo "--- ordered dialog + badpc events ---"
grep -naiE 'Cmd:[0-9a-fx]+|\[BADPC\].*->|CPUCOM ERROR' "$LOG" | head -30
echo "--- counts ---"
echo "Cmd:80 seen:   $(grep -caiE 'Cmd:0?x?80' "$LOG")"
echo "Cmd:04 seen:   $(grep -caiE 'Cmd:0?x?04' "$LOG")   (a POST appearing = BREAKTHROUGH, not expected)"
echo "distinct BADPC FROM pcs:"; grep -aE 'FROM pc=' "$LOG" | grep -oE 'FROM pc=0x[0-9a-f]+' | sort -u
# verdict: is the first BADPC before or after the first Cmd:80?
first_cmd=$(grep -naiE 'Cmd:' "$LOG" | head -1 | cut -d: -f1)
first_bad=$(grep -naE '\[BADPC\]' "$LOG" | head -1 | cut -d: -f1)
echo "--- verdict ---"
if [ -z "$first_cmd" ]; then echo "FAIL: no companion command at all (candidate crashed earlier?)";
elif [ -z "$first_bad" ]; then echo "PASS: Cmd reached, zero BADPC in window";
elif [ "$first_bad" -gt "$first_cmd" ]; then echo "PASS: Cmd:80 reached (line $first_cmd) BEFORE first BADPC (line $first_bad) — no earlier null-jump introduced";
else echo "REGRESSION: a BADPC (line $first_bad) fires BEFORE the first Cmd (line $first_cmd) — a harvest broke an early path"; fi
echo "log: $LOG"
