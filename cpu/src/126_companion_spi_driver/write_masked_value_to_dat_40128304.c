/* @k10d write_masked_value_to_dat_40128304 @ 0x1044da34
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores the lower 30 bits of param_2 into the global variable at 0x40128304.
 * summary:
 *   The function takes two parameters, ignores the first, and writes the second parameter
 *   masked with 0x3fffffff to the global address 0x40128304. No other operations or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_40128304(uint32_t param_1,uint param_2)

{
  _DAT_40128304 = param_2 & 0x3fffffff;
  return;
}
