/* @k10d clear_flag_in_object_field_10442118 @ 0x10442118
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears all bits except bit 7 of the 16-bit field at offset 0x14 in the object pointed
 *   to by param_1.
 * summary:
 *   The function reads a 16-bit value from offset 0x14 of the structure passed in param_1,
 *   masks it with 0x80, and writes the result back. This operation preserves only bit 7
 *   (value 0x80) and clears bits 0-6 and 8-15 of that field. No other memory locations are
 *   accessed and no functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_in_object_field_10442118(int param_1)

{
  **(ushort **)(param_1 + 0x14) = **(ushort **)(param_1 + 0x14) & 0x80;
  return;
}
