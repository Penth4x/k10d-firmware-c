/* @k10d write_masked_value_to_dat_1044e06e @ 0x1044e06e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the lower 11 bits of param_2 (defaulting to 1 if zero) to global DAT_40128124.
 * summary:
 *   The function coerces a zero input to 1, masks the result to 11 bits, and stores it as a
 *   ushort in DAT_40128124. No other side effects or callees are present. The role of
 *   DAT_40128124 is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_1044e06e(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  _DAT_40128124 = (ushort)param_2 & 0x7ff;
  return;
}
