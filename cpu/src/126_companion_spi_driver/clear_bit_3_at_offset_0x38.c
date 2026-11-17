/* @k10d clear_bit_3_at_offset_0x38 @ 0x1043fca4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears bit 3 of the byte located at offset 0x38 in the structure pointed to by param_1.
 * summary:
 *   The function performs a read-modify-write operation on a single byte within a memory
 *   structure. It masks out bit 3 (value 0x20) using the constant 0xdf. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_3_at_offset_0x38(int param_1)

{
  **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) & 0xdf;
  return;
}
