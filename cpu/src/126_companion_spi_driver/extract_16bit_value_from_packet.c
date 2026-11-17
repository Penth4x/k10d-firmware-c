/* @k10d extract_16bit_value_from_packet @ 0x1044bba2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts a 16-bit value from a byte buffer based on a type code returned by a helper
 *   function.
 * summary:
 *   Calls extract_high_two_bits to determine the data format (0 or 1). If 0, it constructs
 *   a 16-bit value from bits in bytes 6-8. If 1, it constructs a 16-bit value from bytes
 *   7-9. Returns 0 for other cases. The specific camera subsystem is not identifiable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_16bit_value_from_packet(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = extract_high_two_bits(param_1);
  if (iVar1 == 0) {
    uVar2 = (param_1[6] & 3) << 10 | (uint)param_1[7] << 2 | (int)(uint)param_1[8] >> 6;
  }
  else if (iVar1 == 1) {
    uVar2 = (param_1[7] & 0x3f) << 0x10 | (uint)param_1[8] << 8 | (uint)param_1[9];
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
