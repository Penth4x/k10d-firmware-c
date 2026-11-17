/* @k10d set_bits_8_10_of_dat_40128108 @ 0x1044d758
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bits_8_10_of_dat_40128108(uint32_t param_1,ushort param_2)

{
  _DAT_40128108 = _DAT_40128108 & 0x700 | param_2;
  return;
}
