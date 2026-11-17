/* @k10d write_two_bytes_to_offset_0x24 @ 0x1048e500
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to offset 0x24 of a structure pointed to by param_1.
 * summary:
 *   The function stores param_2 into the memory location at param_1 + 0x24. It has no
 *   callees and performs no other operations. The specific role of the structure or the
 *   field at offset 0x24 cannot be determined from the provided pseudocode and caller
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_offset_0x24(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 0x24) = param_2;
  return;
}
