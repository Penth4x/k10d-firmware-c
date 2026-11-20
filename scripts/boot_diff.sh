#!/bin/bash
# boot_diff.sh — boot the recompiled candidate vs the original 1.31 firmware in qemu-frn and
# report the first behaviour divergence (function-entry stream). The iterate loop:
#   edit cpu/src/<unit>/<fn>.c  ->  bash cpu/build.sh  ->  bash scripts/boot_diff.sh  ->  commit
#   QEMU=/path/to/qemu-system-frn  FW131=/path/to/FWDC162B.BIN  bash scripts/boot_diff.sh
set -u
HERE="$(cd "$(dirname "$0")"/.. && pwd)"
: "${QEMU:?set QEMU to qemu-system-frn}"; : "${FW131:?set FW131 to original FWDC162B.BIN}"
CAND="$HERE/cpu/out/candidate_FWDC162B.BIN"; WALL=${WALL:-150}
[ -s "$CAND" ] || { echo "no candidate — run cpu/build.sh first"; exit 1; }
T=$(mktemp -d)
run(){ timeout "$WALL" env FRN_FT="$T/$2" "$QEMU" -machine k10d -bios "$1" -display none -serial null -monitor none >/dev/null 2>&1; }
echo "co-booting original vs candidate (${WALL}s each)…"
run "$FW131" stock.ft & run "$CAND" cand.ft & wait
# reduce each trace to its PC stream and find the first differing executed PC
awk '/PC=0x/{print $2}' "$T/stock.ft" > "$T/s.pc"; awk '/PC=0x/{print $2}' "$T/cand.ft" > "$T/c.pc"
echo "stock PCs: $(wc -l < $T/s.pc)   candidate PCs: $(wc -l < $T/c.pc)"
diff "$T/s.pc" "$T/c.pc" | head -20
rm -rf "$T"
