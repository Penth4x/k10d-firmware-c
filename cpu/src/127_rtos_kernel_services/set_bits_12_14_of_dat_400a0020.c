/* @k10d set_bits_12_14_of_dat_400a0020 @ 0x10458432
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 3 bits of param_2 into bits 12-14 of the global at 0x400a0020.
 * summary:
 *   The function performs a read-modify-write on the global variable _DAT_400a0020. It
 *   masks out bits 12, 13, and 14 (using mask 0x7000) and replaces them with the value of
 *   param_2. No other bits in the global are modified. The role of the global at 0x400a0020
 *   is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bits_12_14_of_dat_400a0020(uint32_t param_1,ushort param_2)

{
  _DAT_400a0020 = _DAT_400a0020 & 0x7000 | param_2;
  return;
}
