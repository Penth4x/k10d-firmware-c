/* @k10d read_offset_four_10438328 @ 0x10438328
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value stored at offset 4 of the object pointer passed in param_1.
 * summary:
 *   The function performs a single 16-bit memory read from the address (param_1 + 4) and
 *   returns it. It has no callees and no side effects. The specific meaning of the field at
 *   offset 4 cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_offset_four_10438328(int param_1)

{
  return *(uint16_t *)(param_1 + 4);
}
