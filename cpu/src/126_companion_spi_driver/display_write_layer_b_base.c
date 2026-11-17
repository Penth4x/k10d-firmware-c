/* @k10d display_write_layer_b_base @ 0x1044552a
 * name: verified (structural evidence: decomp: _DAT_40040328 = param_2 & 0x3ffffff0)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the layer B frame base register 0x40040328 (address & 0x3ffffff0).
 * summary:
 *   VERIFIED: decomp: _DAT_40040328 = param_2 & 0x3ffffff0
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void display_write_layer_b_base(uint32_t param_1,uint param_2)

{
  _DAT_40040328 = param_2 & 0x3ffffff0;
  return;
}
