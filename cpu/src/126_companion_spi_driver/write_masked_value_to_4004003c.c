/* @k10d write_masked_value_to_4004003c @ 0x10446384
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_4004003c(uint32_t param_1,ushort param_2)

{
  _DAT_4004003c = param_2 & 0xff1f;
  return;
}
