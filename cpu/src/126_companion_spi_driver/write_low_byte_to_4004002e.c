/* @k10d write_low_byte_to_4004002e @ 0x1044632a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_low_byte_to_4004002e(uint32_t param_1,ushort param_2)

{
  _DAT_4004002e = param_2 & 0xff;
  return;
}
