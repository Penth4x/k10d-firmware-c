#!/bin/bash
# check_display.sh — after the message bus is restored, does the candidate reach display-init
# and program the LCD base register? write_three_config_values (orig 0x10445328) writes
# base_a 0x40040308 / base_b 0x40040328 / alpha 0x40040334. Stock does this at ic~107M.
set -u
HERE=/home/memorai/k10d-firmware-c
QEMU=/home/memorai/qemu-frn/build/qemu-system-frn
CAND=$HERE/cpu/out/candidate_FWDC162B.BIN
MAP=$HERE/cpu/out/firmware.map
SCR=${SCR:-/tmp/claude-1002/-home-memorai-memorAI/f4341860-fe67-4d9c-81be-c7c5c517f9ea/scratchpad}
WALL=${WALL:-240}
PDISP=$(tr -d '\r' < "$MAP" | grep -iE '_write_three_config_values$' | awk '{print $1}' | sed 's/(.*//' | head -1)
echo "candidate display-init packed=0x$PDISP  watching LCD base reg 0x40040308  WALL=${WALL}s"
cp -f "$CAND" "$SCR/d_cand.bin"
timeout "$WALL" env FRN_FLASH_SAVE="$SCR/d_cand.bin" \
  FRN_DISAS_LO=0x$PDISP FRN_DISAS_HI=$(printf '0x%x' $((0x$PDISP+4))) \
  FRN_WRWATCH=0x40040308 FRN_WRWATCH_LEN=4 FRN_FB_DUMP="$SCR/cand_screen.ppm" \
  "$QEMU" -machine k10d -bios "$SCR/d_cand.bin" -display none -serial null \
  >/dev/null 2>"$SCR/d_cand.log"
echo "display-init hits:  $(grep -c "pc=$PDISP " "$SCR/d_cand.log")"
echo "0x40040308 writes:  $(grep -c '40040308' "$SCR/d_cand.log")"
echo "--- any base-reg write lines ---"; grep -iE '4004030|wrwatch|base' "$SCR/d_cand.log" | head -8
echo "--- screenshots ---"; ls -la "$SCR"/cand_screen.ppm.* 2>/dev/null | tail -3
