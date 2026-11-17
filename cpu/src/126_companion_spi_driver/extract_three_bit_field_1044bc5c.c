/* @k10d extract_three_bit_field_1044bc5c @ 0x1044bc5c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a 3-bit value from byte 9 of the input if a validity check passes, else 0.
 * summary:
 *   Calls extract_high_two_bits with the input pointer as a validity or status check. If
 *   the callee returns 0, it extracts bits 2-4 (value 0-7) from the 10th byte of the input
 *   structure. If the check fails, it returns 0. The specific meaning of the 3-bit field is
 *   unknown without more context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_three_bit_field_1044bc5c(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = extract_high_two_bits(param_1);
  if (iVar1 == 0) {
    uVar2 = (int)(uint)param_1[9] >> 2 & 7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
