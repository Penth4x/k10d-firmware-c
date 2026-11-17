/* @k10d write_low_byte_to_0x40040040 @ 0x1044639e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_low_byte_to_0x40040040(uint32_t param_1,ushort param_2)

{
  _DAT_40040040 = param_2 & 0xff;
  return;
}
