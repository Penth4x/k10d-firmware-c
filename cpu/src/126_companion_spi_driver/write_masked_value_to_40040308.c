/* @k10d write_masked_value_to_40040308 @ 0x10445462
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_40040308(uint32_t param_1,uint param_2)

{
  _DAT_40040308 = param_2 & 0x3ffffff0;
  return;
}
