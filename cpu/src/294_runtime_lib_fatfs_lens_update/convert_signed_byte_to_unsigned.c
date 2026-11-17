/* @k10d convert_signed_byte_to_unsigned @ 0x105448ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Converts a signed 8-bit value in the low byte of param_1 to an unsigned 8-bit value.
 * summary:
 *   The function extracts the low 8 bits of param_1. If the value is non-negative (0-127)
 *   or -1 (0xff), it returns the value as-is. If the value is negative (128-255, i.e. -128
 *   to -2), it adds 0x38000000 to the zero-extended value, which effectively wraps the
 *   negative number to its unsigned 8-bit equivalent (e.g., -1 becomes 255). The result is
 *   returned in the low 32 bits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t convert_signed_byte_to_unsigned(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(param_1 << 1) >> 0x18;
  if ((iVar1 == 0) || (iVar1 == -1)) {
    uVar2 = (uint)((int)(param_1 << 1) >> 3) >> 1;
  }
  else {
    uVar2 = ((param_1 & 0x7fffffff) >> 3) + 0x38000000;
  }
  return CONCAT44(uVar2 | param_1 & 0x80000000/*SDRAM*/,param_1 << 0x1d);
}
