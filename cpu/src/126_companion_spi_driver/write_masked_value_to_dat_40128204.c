/* @k10d write_masked_value_to_dat_40128204 @ 0x1044d94a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the lower 26 bits of param_2 to global DAT_40128204.
 * summary:
 *   The function masks the second argument with 0x3ffffff0 and stores the result in the
 *   global variable DAT_40128204. No other operations or side effects are present. The role
 *   of DAT_40128204 is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_40128204(uint32_t param_1,uint param_2)

{
  _DAT_40128204 = param_2 & 0x3ffffff0;
  return;
}
