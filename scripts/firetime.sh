#!/bin/bash
# firetime.sh — companion-ready FIRE-TIME oracle for the menu root. FRN_FT_PC starts the trace at
# the first execution of the companion-ready flag setter, so the log's FIRST line = the first fire:
# its leading field is the instruction count (ic) and rp= is the caller/dispatcher. ROOT HYPOTHESIS:
# set_flag_at_offset_0x28_10467264 fires at ic ~5.58M in the candidate (tick ~1) vs ~35.7M in stock
# (tick ~393), so ui_task6 polls the companion before it is ready. CLEAN: fresh bios, NO FLASH_SAVE.
set -u
HERE=/home/memorai/k10d-firmware-c
QEMU=/home/memorai/qemu-frn/build/qemu-system-frn
CAND=${CAND:-$HERE/cpu/out/candidate_FWDC162B.BIN}
MAP=${MAP:-$HERE/cpu/out/firmware.map}
STOCK=${STOCK:-/home/memorai/k10d-re/FWDC162B.BIN}
SCR=${SCR:-/tmp/claude-1002/-home-memorai-memorAI/f4341860-fe67-4d9c-81be-c7c5c517f9ea/scratchpad}
WALL=${WALL:-240}
SYM=${SYM:-set_flag_at_offset_0x28_10467264}
ORIG_VA=${ORIG_VA:-0x10467264}     # stock address (stable); candidate packed addr resolved from map
PACK=$(tr -d '\r' < "$MAP" | grep -iE "_${SYM}\$" | awk '{print $1}' | sed 's/(.*//' | head -1)
PACK=${PACK#0x}
echo "firetime: sym=$SYM orig=$ORIG_VA candidate_packed=0x${PACK:-<none>} WALL=${WALL}s"
[ -z "$PACK" ] && { echo "!! packed symbol not in map"; exit 2; }

run() {  # $1=label $2=bios $3=watch_pc(no 0x)
  local lbl=$1 bios=$2 pc=$3
  cp -f "$bios" "$SCR/ft_${lbl}.bin"
  timeout "$WALL" env FRN_FT="$SCR/ft_${lbl}.log" FRN_FT_PC="0x$pc" FRN_FT_WIN=400 \
    "$QEMU" -machine k10d -bios "$SCR/ft_${lbl}.bin" -display none -serial null \
    >/dev/null 2>"$SCR/ft_${lbl}.err"
  local l1=$(grep -m1 -E "(PC|F)=0x0*${pc}( |$)" "$SCR/ft_${lbl}.log" 2>/dev/null)
  if [ -z "$l1" ]; then echo "[$lbl] NEVER FIRED within ${WALL}s (pc 0x$pc)"; return; fi
  local ic=${l1%% *}; local rp=$(echo "$l1" | grep -oE 'rp=[0-9a-f]+' | head -1)
  echo "[$lbl] first-fire ic=$ic  caller $rp"
  echo "       $l1"
}
echo "--- CANDIDATE (packed 0x$PACK) ---"; run cand "$CAND" "$PACK"
echo "--- STOCK (orig ${ORIG_VA#0x}) ---"; run stock "$STOCK" "${ORIG_VA#0x}"
echo "logs: $SCR/ft_cand.log  $SCR/ft_stock.log  (first line = first fire; rp = dispatcher)"
