/* @k10d extract_two_bit_field @ 0x1044bc7e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts a 2-bit value from bytes 9 and 10 of a structure if a validity check passes.
 * summary:
 *   Calls extract_high_two_bits to validate the input pointer. If valid, it constructs a
 *   2-bit integer by taking the lower 2 bits of byte 9 and the highest bit of byte 10.
 *   Returns 0 if the validation fails or the field is zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_two_bit_field(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = extract_high_two_bits(param_1);
  if (iVar1 == 0) {
    uVar2 = (param_1[9] & 3) << 1 | (int)(uint)param_1[10] >> 7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
