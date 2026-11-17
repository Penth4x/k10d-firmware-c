/* @k10d write_masked_value_to_40040008 @ 0x10446228
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_40040008(uint32_t param_1,ushort param_2)

{
  _DAT_40040008 = param_2 & 0x4cff;
  return;
}
