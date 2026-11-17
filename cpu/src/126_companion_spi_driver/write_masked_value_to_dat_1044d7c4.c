/* @k10d write_masked_value_to_dat_1044d7c4 @ 0x1044d7c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores the lower 12 bits of param_2 into global DAT_4012810a.
 * summary:
 *   The function masks the input parameter param_2 with 0x7ff0 and writes the result to the
 *   global variable DAT_4012810a. No other operations or side effects are present in the
 *   pseudocode. The role of DAT_4012810a is not determinable from the provided code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_1044d7c4(uint32_t param_1,ushort param_2)

{
  _DAT_4012810a = param_2 & 0x7ff0;
  return;
}
