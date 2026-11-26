#!/bin/bash
# validate_mbx.sh — after a relink, measure whether the B-3 reg_framework_send fix restored
# the message bus. Direct FRN_DISAS send-count (reliable; NOT codiff) on stock vs new candidate.
set -u
HERE=/home/memorai/k10d-firmware-c
QEMU=/home/memorai/qemu-frn/build/qemu-system-frn
STOCK=/home/memorai/k10d-re/FWDC162B.BIN
CAND=$HERE/cpu/out/candidate_FWDC162B.BIN
MAP=$HERE/cpu/out/firmware.map
SCR=${SCR:-/tmp/claude-1002/-home-memorai-memorAI/f4341860-fe67-4d9c-81be-c7c5c517f9ea/scratchpad}
WALL=${WALL:-200}
# new packed addr of mbx_send_message from the fresh map
PMBX=$(grep -iE '_mbx_send_message$' "$MAP" | grep -oiE '^ *[0-9a-f]+' | tr -d ' ' | head -1)
echo "stock mbx=0x10459864  new-candidate packed mbx=0x$PMBX  WALL=${WALL}s"
cp -f "$STOCK" "$SCR/v_stk.bin"; cp -f "$CAND" "$SCR/v_cand.bin"
run(){ local bin=$1 lo=$2 out=$3
  timeout "$WALL" env FRN_FLASH_SAVE="$bin" FRN_DISAS_LO=0x$lo FRN_DISAS_HI=$(printf '0x%x' $((0x$lo+4))) \
    "$QEMU" -machine k10d -bios "$bin" -display none -serial null >/dev/null 2>"$out"; }
run "$SCR/v_stk.bin" 10459864 "$SCR/v_stk.log" &
run "$SCR/v_cand.bin" "$PMBX" "$SCR/v_cand.log" &
wait
sc=$(grep -c "pc=10459864 " "$SCR/v_stk.log"); cc=$(grep -c "pc=$PMBX " "$SCR/v_cand.log")
echo "=== RESULT: stock mbx_send=$sc   candidate mbx_send=$cc  (was 1 before the fix) ==="
