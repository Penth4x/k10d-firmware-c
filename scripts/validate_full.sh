#!/bin/bash
# validate_full.sh — post-build menu-progress check. Measures, on the fresh candidate:
#   (1) message SEND count via int40 snd_mbx (0x10010c18) — was 1; should climb if the cascade flows
#   (2) reach of the unit-206 menu construction (construct_object_with_vtable 0x104a8b50) — was 0
#   (3) whether display-init runs + LCD base reg 0x40040308 is programmed (black-screen gate)
set -u
HERE=/home/memorai/k10d-firmware-c; QEMU=/home/memorai/qemu-frn/build/qemu-system-frn
CAND=$HERE/cpu/out/candidate_FWDC162B.BIN; MAP=$HERE/cpu/out/firmware.map
SCR=${SCR:-/tmp/claude-1002/-home-memorai-memorAI/f4341860-fe67-4d9c-81be-c7c5c517f9ea/scratchpad}
WALL=${WALL:-180}
pk(){ grep -iE "_$1\$" "$MAP" | awk '{print $1}' | sed 's/(.*//' | head -1; }
PCONSTR=$(pk construct_object_with_vtable); PDISP=$(pk write_three_config_values)
cp -f "$CAND" "$SCR/vf.bin"
echo "snd_mbx int40 + construct(0x$PCONSTR) + display-init(0x$PDISP) + LCD-base 0x40040308, WALL=${WALL}s"
# run 1: int40 all (send count) with stdbuf
stdbuf -oL -eL timeout "$WALL" env FRN_FLASH_SAVE="$SCR/vf.bin" FRN_INT40_SVC=10010c18 \
  "$QEMU" -machine k10d -bios "$SCR/vf.bin" -display none -serial null >/dev/null 2>"$SCR/vf_snd.log" &
# run 2: construct reach + display-init + LCD watch (separate flash)
cp -f "$CAND" "$SCR/vf2.bin"
timeout "$WALL" env FRN_FLASH_SAVE="$SCR/vf2.bin" FRN_DISAS_LO=0x$PCONSTR FRN_DISAS_HI=$(printf '0x%x' $((0x$PCONSTR+4))) \
  FRN_WRWATCH=0x40040308 FRN_WRWATCH_LEN=4 FRN_FB_DUMP="$SCR/vf_screen.ppm" \
  "$QEMU" -machine k10d -bios "$SCR/vf2.bin" -display none -serial null >/dev/null 2>"$SCR/vf_reach.log" &
wait
echo "=================================================="
echo " SEND count (snd_mbx):   $(python3 -c "print(sum(1 for l in open('$SCR/vf_snd.log') if 'r12=10010c18' in l))")   (was 1)"
echo " construct_object reach: $(python3 -c "print(sum(1 for l in open('$SCR/vf_reach.log') if 'pc=$PCONSTR ' in l))")   (was 0 — unit-206 menu build)"
echo " 0x40040308 writes:      $(python3 -c "print(sum(1 for l in open('$SCR/vf_reach.log') if '40040308' in l))")   (LCD base; nonzero => display programmed)"
echo "=================================================="
grep -iE '40040308' "$SCR/vf_reach.log" | head -3
ls -la "$SCR"/vf_screen.ppm.* 2>/dev/null | tail -2
