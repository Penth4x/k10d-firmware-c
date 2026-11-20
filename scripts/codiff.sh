#!/bin/bash
# codiff.sh — behavioural diff of THIS repo's candidate vs the stock 1.31 firmware, at
# function-entry granularity (the readable hunks: "stock went A->B->C, candidate went A->C").
# Co-runs both in qemu-frn, streams each instruction trace through the fn-entry reducer via a
# FIFO (no multi-GB trace on disk; the FIFO back-pressures qemu, so it is disk-safe), remaps
# packed (0x1062+) -> orig VAs via this build's firmware.map, and realign-diffs the sequences.
# Traces are bounded by WALL TIME only — never by instruction count (the menu is deep in the run).
#
#   QEMU=/path/qemu-system-frn  FW131=/path/FWDC162B.BIN  bash scripts/codiff.sh
#   REGS=1 ...  -> also capture r4-r7 at each entry; rdiff finds the first call with WRONG ARGS
#                 (same call-sequence does not imply same data — the second divergence class).
#
# Symbol oracle: fnseq.py + the Ghidra symbol DB live in the sibling k10d-re/harness2 checkout
# (set RE=/path/to/k10d-re to relocate). They only NAME the functions; the diff is derived from
# this repo's candidate + map.
set -u
HERE="$(cd "$(dirname "$0")"/.. && pwd)"
RE=${RE:-/home/memorai/k10d-re}; H="$RE/harness2"
QEMU=${QEMU:-/home/memorai/qemu-frn/build/qemu-system-frn}
: "${FW131:?set FW131 to the original FWDC162B.BIN}"
CAND="$HERE/cpu/out/candidate_FWDC162B.BIN"
MAP="$HERE/cpu/out/firmware.map"
DB="$H/catalog.sqlite"
WALL=${WALL:-150}
[ -s "$CAND" ] || { echo "no candidate — run cpu/build.sh first"; exit 1; }
[ -s "$MAP" ]  || { echo "no firmware.map — build did not link"; exit 1; }
REGS=${REGS:-0}; FR_ENV=""; STREAM_ARG=""; EXT="fnseq"
[ "$REGS" = 1 ] && { FR_ENV="FRN_FT_FULLREGS=1"; STREAM_ARG="regs"; EXT="rseq"; }
T=$(mktemp -d)
run(){ local bios=$1 out=$2 fifo="$T/fifo_$3"; mkfifo "$fifo"
  ( cd "$H" && python3 fnseq.py stream "$DB" "$MAP" "$out" $STREAM_ARG < "$fifo" ) & local rp=$!
  timeout "$WALL" env $FR_ENV FRN_FT="$fifo" "$QEMU" -machine k10d -bios "$bios" \
      -display none -serial null -monitor none >/dev/null 2>&1
  wait "$rp"; }
# FIRST=1 (default): stop at the FIRST divergence — the only actionable signal. Everything after
# it is computed on an already-diverged machine (consequences, not independent bugs), so resyncing
# past it just prints noise. FIRST=0 shows the whole resynced hunk landscape.
FIRST=${FIRST:-1}
echo "[codiff] WALL=${WALL}s REGS=$REGS FIRST=$FIRST  co-running stock + candidate"
run "$FW131" "$T/stock.$EXT" stock & run "$CAND" "$T/cand.$EXT" cand & wait
echo "[codiff] stock entries: $(wc -l < "$T/stock.$EXT")   cand entries: $(wc -l < "$T/cand.$EXT")"
if [ "$REGS" = 1 ]; then DIFF=$(cd "$H" && python3 fnseq.py rdiff "$T/stock.rseq" "$T/cand.rseq" "$DB" 400)
else DIFF=$(cd "$H" && python3 fnseq.py fdiff "$T/stock.fnseq" "$T/cand.fnseq" "$DB" 25 400); fi
if [ "$FIRST" = 1 ]; then
  # print header lines, then the first divergence block only (fdiff '=== divergence' or rdiff
  # 'STRUCT-DIVERGE'), then stop. ARG-DIFF lines (rdiff) are kept — they precede the structural one.
  echo "$DIFF" | awk 'BEGIN{n=0} /^=== divergence|^STRUCT-DIVERGE/{n++} n>1{next} {print}'
else echo "$DIFF"; fi
# KEEP=<dir>: copy the raw trace sequences out for offline analysis (arity filtering etc.)
[ -n "${KEEP:-}" ] && { mkdir -p "$KEEP"; cp "$T"/stock.$EXT "$T"/cand.$EXT "$KEEP"/ 2>/dev/null; echo "[codiff] kept traces in $KEEP"; }
rm -rf "$T"
