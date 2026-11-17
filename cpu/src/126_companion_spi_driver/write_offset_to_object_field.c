/* @k10d write_offset_to_object_field @ 0x1043c4d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Conditionally writes a computed 16-bit offset into a pointer field at offset 0x1c of an
 *   object.
 * summary:
 *   Checks if param_2 is less than 0x7c1f07c. If true, it takes the lower 16 bits of
 *   param_2, multiplies by 0x42 (66), shifts right by 1 (effectively multiplying by 33),
 *   subtracts 1, and stores the result as an integer at *(param_1 + 0x1c). No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_offset_to_object_field(int param_1,uint param_2)

{
  if (param_2 < 0x7c1f07c) {
    **(int **)(param_1 + 0x1c) = ((int)((param_2 & 0xffff) * 0x42) >> 1) + -1;
  }
  return;
}
