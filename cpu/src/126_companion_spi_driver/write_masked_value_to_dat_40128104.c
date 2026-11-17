/* @k10d write_masked_value_to_dat_40128104 @ 0x1044d734
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the lower 30 bits of param_2 to the global variable at 0x40128104.
 * summary:
 *   The function masks the second argument with 0x3fffffff and stores the result in the
 *   global variable _DAT_40128104. It has no callees and performs no other operations. The
 *   role of the global variable is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_40128104(uint32_t param_1,uint param_2)

{
  _DAT_40128104 = param_2 & 0x3fffffff;
  return;
}
