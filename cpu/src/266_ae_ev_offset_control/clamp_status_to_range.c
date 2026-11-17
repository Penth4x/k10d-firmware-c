/* @k10d clamp_status_to_range @ 0x10503d12
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Clamps the return value of read_watch_counter_low_bits to the range 0-3.
 * summary:
 *   Reads a 32-bit value from offset 0xc of the object pointed to by param_1 and passes it
 *   to read_watch_counter_low_bits. The result is then clamped: values 0, 1, 2, and 3 are
 *   returned as-is, while any other value (including negative or >3) is returned as 0. The
 *   caller context is unknown, so the specific camera subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clamp_status_to_range(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = read_watch_counter_low_bits(*(uint32_t *)(param_1 + 0xc));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
    if (iVar1 != 3) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
