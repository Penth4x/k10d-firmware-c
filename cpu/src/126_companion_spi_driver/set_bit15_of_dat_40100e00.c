/* @k10d set_bit15_of_dat_40100e00 @ 0x1044eed6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit15_of_dat_40100e00(uint32_t param_1,int param_2)

{
  _DAT_40100e00 = _DAT_40100e00 & 0x3333;
  if (param_2 != 0) {
    _DAT_40100e00 = _DAT_40100e00 | 0x8000;
  }
  return;
}
