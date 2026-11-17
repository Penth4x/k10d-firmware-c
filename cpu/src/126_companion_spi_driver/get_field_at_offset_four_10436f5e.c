/* @k10d get_field_at_offset_four_10436f5e @ 0x10436f5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value stored at offset 4 of the object pointed to by param_1.
 * summary:
 *   The function performs a single 32-bit memory read from the address param_1 + 4 and
 *   returns it. It has no callees and no side effects. The specific role of the field at
 *   offset 4 cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_at_offset_four_10436f5e(int param_1)

{
  return *(uint32_t *)(param_1 + 4);
}
