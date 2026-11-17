/* @k10d set_bit15_of_dat_40100002 @ 0x1044e234
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit15_of_dat_40100002(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_40100002 = _DAT_40100002 & 0x7fff;
  }
  else {
    _DAT_40100002 = _DAT_40100002 | 0x8000;
  }
  return;
}
