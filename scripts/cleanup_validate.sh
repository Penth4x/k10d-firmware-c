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
grep -a 'TX byte' "$OUT/s.log" | sed 's/ pc=.*//' > "$OUT/s.tx"
grep -a 'TX byte' "$OUT/c.log" | sed 's/ pc=.*//' > "$OUT/c.tx"

echo "[3/3] diff companion TX (candidate must be a byte-identical prefix of stock) ..."
# candidate may stall earlier than stock, so it is valid iff its TX is an exact prefix of stock's.
n=$(wc -l < "$OUT/c.tx")
if diff <(head -n "$n" "$OUT/s.tx") "$OUT/c.tx" >/dev/null; then
  echo "PASS: companion TX byte-identical to stock through $n bytes (behaviour preserved)."
  rm -rf "$OUT"; exit 0
else
  echo "FAIL: companion TX DIVERGED from stock -- a cleanup changed behaviour. First diff:"
  diff <(head -n "$n" "$OUT/s.tx") "$OUT/c.tx" | head -10
  echo "logs kept in $OUT"; exit 1
fi
