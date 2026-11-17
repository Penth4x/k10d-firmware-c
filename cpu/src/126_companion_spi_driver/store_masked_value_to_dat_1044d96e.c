/* @k10d store_masked_value_to_dat_1044d96e @ 0x1044d96e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_masked_value_to_dat_1044d96e(uint32_t param_1,uint param_2)

{
  _DAT_4012820c = param_2 & 0x3ffffff0;
  return;
}
