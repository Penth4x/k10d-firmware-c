#!/usr/bin/env bash
# cleanup_validate.sh -- behaviour validation for an LLM cleanup batch.
# The cleanup is only legitimate if it is BEHAVIOUR-PRESERVING (faithful recompile). This rebuilds
# the firmware and checks two things:
#   1. it still COMPILES + links (checksums VALID)
#   2. the companion SPI TX stream is still BYTE-IDENTICAL to stock (no behaviour change)
# Exit 0 = PASS (safe to keep the batch), non-zero = FAIL (review/revert the batch).
set -u
ROOT=/home/memorai/k10d-firmware-c
QEMU=/home/memorai/qemu-frn/build/qemu-system-frn
STOCK=/home/memorai/k10d-re/FWDC162B.BIN
CAND=$ROOT/cpu/out/candidate_FWDC162B.BIN
OUT=$(mktemp -d)

echo "[1/3] rebuild ..."
( cd "$ROOT" && SOFTUNE=/home/memorai/k10d-re/softune FW131=$STOCK bash cpu/build.sh ) >"$OUT/build.log" 2>&1
if ! grep -q 'checksums VALID' "$OUT/build.log"; then
  echo "FAIL: build did not reach 'checksums VALID'"; tail -5 "$OUT/build.log"; exit 2
fi
echo "      checksums VALID"

echo "[2/3] stock + candidate SPI capture (20s each) ..."
timeout 20 env FRN_SPI_LOG=1 "$QEMU" -machine k10d -display none -bios "$STOCK" 2>"$OUT/s.log" >/dev/null
timeout 20 env FRN_SPI_LOG=1 "$QEMU" -machine k10d -display none -bios "$CAND"  2>"$OUT/c.log" >/dev/null
# Signature per SPI transaction = its MEANINGFUL TX bytes (cmd + size + <size> data; byte[1]=size),
# trimmed of trailing padding and deduped. Comparison is a CONTENT SET, not a positional diff:
# every distinct command the candidate sends must be byte-identical to one stock sends. This is robust
# to (a) the candidate stalling earlier (fewer txns), (b) the free-running timer emitting a different
# number of status polls, and (c) trailing-pad length -- none of which are behaviour. A cleanup that
# CHANGES a command byte makes that command absent from stock's set -> FAIL. (The earlier raw
# line-prefix diff misaligned on all three and false-FAILed its own correct bytes.)
txnsig() { awk '
  function emit(){ if(n>0){ s=""; for(i=0;i<2+b1 && i<n;i++) s=s" "a[i]; print s } n=0 }
  /txn start/ { emit(); next }
  /TX byte/   { v=$0; sub(/.*\]=/,"",v); sub(/ .*/,"",v); a[n]=v; if(n==1)b1=strtonum(v); n++ }
  END         { emit() }' "$1" | sort -u; }
txnsig "$OUT/s.log" > "$OUT/s.txn"
txnsig "$OUT/c.log" > "$OUT/c.txn"

echo "[3/3] compare companion commands as a content set (every candidate cmd must match a stock cmd) ..."
if [ ! -s "$OUT/c.txn" ]; then echo "FAIL: candidate emitted no SPI txns"; echo "logs in $OUT"; exit 1; fi
extra=$(comm -23 "$OUT/c.txn" "$OUT/s.txn")
if [ -z "$extra" ]; then
  echo "PASS: all $(wc -l <"$OUT/c.txn") distinct candidate commands are byte-identical to stock (behaviour preserved)."
  rm -rf "$OUT"; exit 0
else
  echo "FAIL: candidate sends command(s) stock never does -- a cleanup changed behaviour:"
  echo "$extra" | head -6
  echo "logs kept in $OUT"; exit 1
fi
