#!/bin/bash
# syscall_trace.sh <bios> [svc_csv] [wall] — reliable int#0x40 REALOS-syscall trace.
# Uses `stdbuf -eL` so each stderr line flushes immediately and SURVIVES timeout's SIGTERM
# (the sparse int40 distinct log otherwise sits in qemu's 4KB stderr buffer and is lost on kill).
# No svc_csv -> distinct-service mode (first occurrence of each REALOS service, low volume).
# svc_csv=all or hex,hex -> every call to those services (r4..r7), for the TERMINAL blocking wait.
set -u
QEMU=/home/memorai/qemu-frn/build/qemu-system-frn
BIOS=${1:?bios}; SVC=${2:-}; WALL=${3:-150}
SCR=${SCR:-/tmp/claude-1002/-home-memorai-memorAI/f4341860-fe67-4d9c-81be-c7c5c517f9ea/scratchpad}
fl="$SCR/st_$(basename "$BIOS").flash"; cp -f "$BIOS" "$fl"
out="$SCR/st_$(basename "$BIOS").log"
env_args=(FRN_FLASH_SAVE="$fl")
if [ -n "$SVC" ]; then env_args+=(FRN_INT40_SVC="$SVC"); else env_args+=(FRN_TRACE_IRQ=1); fi
echo "tracing $(basename "$BIOS")  svc='${SVC:-distinct}'  wall=${WALL}s -> $out"
stdbuf -oL -eL timeout "$WALL" env "${env_args[@]}" \
  "$QEMU" -machine k10d -bios "$fl" -display none -serial null >/dev/null 2>"$out"
echo "[int40] lines: $(grep -c '\[int40' "$out")"
