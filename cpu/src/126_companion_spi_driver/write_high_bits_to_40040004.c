/* @k10d write_high_bits_to_40040004 @ 0x10446208
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_high_bits_to_40040004(uint32_t param_1,ushort param_2)

{
  _DAT_40040004 = param_2 & 0xc000;
  return;
}
