/* @k10d read_offset_10_field @ 0x10435676
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value stored at offset 10 of the object pointed to by param_1.
 * summary:
 *   The function performs a single 16-bit memory read from param_1 + 10 and returns it. It
 *   has no callees and no side effects. The specific role of the field at offset 10 cannot
 *   be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_offset_10_field(int param_1)

{
  return *(uint16_t *)(param_1 + 10);
}
