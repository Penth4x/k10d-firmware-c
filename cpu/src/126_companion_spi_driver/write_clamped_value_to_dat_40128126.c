/* @k10d write_clamped_value_to_dat_40128126 @ 0x1044e096
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clamps param_2 to a minimum of 5 and writes the lower 11 bits to global DAT_40128126.
 * summary:
 *   The function enforces a minimum value of 5 for param_2, masks it to 11 bits, and stores
 *   the result in the 16-bit global DAT_40128126. No other side effects or callees are
 *   present. The role of DAT_40128126 is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_clamped_value_to_dat_40128126(uint32_t param_1,int param_2)

{
  if (param_2 < 5) {
    param_2 = 5;
  }
  _DAT_40128126 = (ushort)param_2 & 0x7ff;
  return;
}
