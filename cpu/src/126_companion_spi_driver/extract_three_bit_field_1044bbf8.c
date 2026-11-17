/* @k10d extract_three_bit_field_1044bbf8 @ 0x1044bbf8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a 3-bit value from byte offset 8 of the input buffer if a validity check
 *   passes.
 * summary:
 *   Calls extract_high_two_bits with the input pointer to perform a check. If the check
 *   returns 0, it extracts bits 3-5 from the byte at offset 8 of the buffer. If the check
 *   fails (non-zero), it returns 0. The specific meaning of the 3-bit field is unknown
 *   without further context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_three_bit_field_1044bbf8(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = extract_high_two_bits(param_1);
  if (iVar1 == 0) {
    uVar2 = (int)(uint)param_1[8] >> 3 & 7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
