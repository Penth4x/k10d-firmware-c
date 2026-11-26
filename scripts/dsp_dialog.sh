#!/bin/bash
# dsp_dialog.sh — the companion-command oracle (FRN_DSP_LOG). Stock bootstrap = Cmd:04 (POST) ->
# status X -> Cmd:05 -> A,A,H,B. Candidate (menu-blocked) = ONLY Cmd:80 (out_size=0) -> CPUCOM ERROR.
# Use as pass/fail for any menu fix. CLEAN METHOD: fresh bios copy, NO FLASH_SAVE (flash persistence
# pollutes behavior across runs — FRN_DSP_LOG dialog happens early, before flash matters anyway).
set -u
HERE=/home/memorai/k10d-firmware-c
QEMU=/home/memorai/qemu-frn/build/qemu-system-frn
CAND=${CAND:-$HERE/cpu/out/candidate_FWDC162B.BIN}
SCR=${SCR:-/tmp/claude-1002/-home-memorai-memorAI/f4341860-fe67-4d9c-81be-c7c5c517f9ea/scratchpad}
WALL=${WALL:-120}
LBL=${LBL:-cand}
cp -f "$CAND" "$SCR/dsp_${LBL}.bin"   # fresh copy; NOT reused as FLASH_SAVE target
echo "dsp_dialog: $LBL  WALL=${WALL}s  bios=$(md5sum "$SCR/dsp_${LBL}.bin" | cut -c1-12)"
timeout "$WALL" env FRN_DSP_LOG=1 \
  "$QEMU" -machine k10d -bios "$SCR/dsp_${LBL}.bin" -display none -serial null \
  >/dev/null 2>"$SCR/dsp_${LBL}.log"
echo "--- companion commands seen (Cmd:) ---"
grep -aoE 'Cmd:[0-9a-fA-Fx]+' "$SCR/dsp_${LBL}.log" | sort | uniq -c
echo "--- first 12 dialog lines ---"
grep -aiE 'Cmd:|status|CPUCOM|POST' "$SCR/dsp_${LBL}.log" | head -12
echo "--- verdict ---"
if grep -qaE 'Cmd:0?x?04' "$SCR/dsp_${LBL}.log"; then echo "PASS-ish: Cmd:04 POST present"; \
  elif grep -qaE 'Cmd:0?x?80' "$SCR/dsp_${LBL}.log"; then echo "BLOCKED (expected): only Cmd:80, no POST"; \
  else echo "NEITHER 04 nor 80 — investigate"; fi
echo "log: $SCR/dsp_${LBL}.log"
