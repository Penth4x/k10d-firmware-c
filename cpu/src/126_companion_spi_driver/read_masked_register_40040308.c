/* @k10d read_masked_register_40040308 @ 0x1044580e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the value of memory-mapped register 0x40040308 with the lower 4 bits cleared.
 * summary:
 *   The function reads a 32-bit value from the global address 0x40040308 and applies a
 *   bitwise AND with 0x3ffffff0. This operation masks out the four least significant bits
 *   of the register value before returning it. No other side effects or function calls are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint read_masked_register_40040308(uint32_t param_x0)

{
  return _DAT_40040308 & 0x3ffffff0;
}
