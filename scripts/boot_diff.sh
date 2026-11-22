#!/bin/bash
# boot_diff.sh — boot the recompiled candidate vs the original 1.31 firmware in qemu-frn and
# report the first behaviour divergence (PC stream). The iterate loop:
#   edit cpu/src/<unit>/<fn>.c  ->  bash cpu/build.sh  ->  bash scripts/boot_diff.sh  ->  commit
#   QEMU=/path/to/qemu-system-frn  FW131=/path/to/FWDC162B.BIN  bash scripts/boot_diff.sh
#
# NEVER dump the uncapped full FRN_FT trace to disk: at full speed each side writes ~10 GB+ to
# the FRN_FT path within the wall, which filled the shared tmpfs and hit siblings. Instead the
# two traces stream through FIFOs and an awk reducer keeps ONLY the PC column on the fly, so the
# multi-GB instruction stream is consumed and discarded — only the ~10 MB PC lists ever land on
# disk. FUNCS=1 uses the far smaller function-entry stream (F= lines) instead. A hard cap on the
# reduced PC files (MAXPC, default 40M lines) is a backstop if a reducer ever falls behind.
set -u
HERE="$(cd "$(dirname "$0")"/.. && pwd)"
: "${QEMU:?set QEMU to qemu-system-frn}"; : "${FW131:?set FW131 to original FWDC162B.BIN}"
CAND="$HERE/cpu/out/candidate_FWDC162B.BIN"; WALL=${WALL:-150}; MAXPC=${MAXPC:-40000000}
FUNCS=${FUNCS:-0}   # FUNCS=1: diff the function-entry stream (F=lines) instead of every PC
[ -s "$CAND" ] || { echo "no candidate — run cpu/build.sh first"; exit 1; }
# Reduced PC lists go on real disk (not tmpfs) so they never pressure the shared /tmp.
OUTD="$HERE/cpu/out/bootdiff"; mkdir -p "$OUTD"; rm -f "$OUTD"/s.pc "$OUTD"/c.pc
T=$(mktemp -d); trap 'rm -rf "$T"' EXIT
mkfifo "$T/stock.fifo" "$T/cand.fifo"
# Reducers: FIFO -> PC-only (capped). "F=" lines in FUNCS mode, "PC=" lines otherwise; the field
# after the "=" prefix is the address. head caps as a backstop; the full stream is still drained
# because the reducer keeps reading (|| true on SIGPIPE) — qemu is bounded by `timeout` regardless.
KEY=$([ "$FUNCS" = 1 ] && echo 'F=0x' || echo 'PC=0x')
reduce(){ awk -v k="$1" 'index($0,k){for(i=1;i<=NF;i++) if(index($i,k)){sub(/^[^=]*=/,"",$i); print $i; break}}' "$2"; }
reduce "$KEY" "$T/stock.fifo" | head -n "$MAXPC" > "$OUTD/s.pc" &
reduce "$KEY" "$T/cand.fifo"  | head -n "$MAXPC" > "$OUTD/c.pc" &
run(){ FENV="FRN_FT=$1"; [ "$FUNCS" = 1 ] && FENV="$FENV FRN_FT_FUNCS=1"; \
       timeout "$WALL" env $FENV "$QEMU" -machine k10d -bios "$2" -display none -serial null -monitor none >/dev/null 2>&1; }
echo "co-booting original vs candidate (${WALL}s each, FUNCS=$FUNCS)…"
run "$T/stock.fifo" "$FW131" & run "$T/cand.fifo" "$CAND" & wait
wait   # let the reducers flush
echo "stock PCs: $(wc -l < "$OUTD/s.pc")   candidate PCs: $(wc -l < "$OUTD/c.pc")"
echo "first divergence (stock < , candidate >):"
diff "$OUTD/s.pc" "$OUTD/c.pc" | head -20
echo "(reduced PC lists kept at $OUTD/{s,c}.pc)"
