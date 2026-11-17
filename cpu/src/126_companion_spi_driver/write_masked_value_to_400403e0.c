/* @k10d write_masked_value_to_400403e0 @ 0x1044574e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a masked version of param_2 to the global DAT_400403e0.
 * summary:
 *   The function takes two parameters, masks the second with 0xc0ffffff, and stores the
 *   result in the global variable DAT_400403e0. The first parameter is unused. No other
 *   side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_400403e0(uint32_t param_1,uint param_2)

{
  _DAT_400403e0 = param_2 & 0xc0ffffff;
  return;
}
