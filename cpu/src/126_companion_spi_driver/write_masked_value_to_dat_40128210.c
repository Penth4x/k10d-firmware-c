/* @k10d write_masked_value_to_dat_40128210 @ 0x1044d9b6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores the lower 13 bits of param_2 into the global DAT_40128210.
 * summary:
 *   The function masks the 16-bit input param_2 with 0x3fe0 and writes the result to the
 *   global variable DAT_40128210. No other operations or side effects are present. The role
 *   of DAT_40128210 is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_40128210(uint32_t param_1,ushort param_2)

{
  _DAT_40128210 = param_2 & 0x3fe0;
  return;
}
