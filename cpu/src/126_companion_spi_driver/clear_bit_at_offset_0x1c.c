/* @k10d clear_bit_at_offset_0x1c @ 0x1043fda6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears the second least significant bit of the byte at offset 0x1c in the object
 *   pointed to by param_1.
 * summary:
 *   The function performs a bitwise AND with 0xef on the byte located at param_1 + 0x1c.
 *   This operation specifically clears bit 1 (value 0x02) of that byte while leaving all
 *   other bits unchanged. No other memory locations are accessed and no functions are
 *   called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_at_offset_0x1c(int param_1)

{
  **(byte **)(param_1 + 0x1c) = **(byte **)(param_1 + 0x1c) & 0xef;
  return;
}
