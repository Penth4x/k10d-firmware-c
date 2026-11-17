/* @k10d store_param2_to_dat_4004003e @ 0x10446394
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the second argument to the global variable at 0x4004003e.
 * summary:
 *   The function takes two parameters but only uses the second one (param_2), storing it
 *   into the global DAT_4004003e. The first parameter (param_1) is ignored. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_param2_to_dat_4004003e(uint32_t param_1,uint16_t param_2)

{
  _DAT_4004003e = param_2;
  return;
}
