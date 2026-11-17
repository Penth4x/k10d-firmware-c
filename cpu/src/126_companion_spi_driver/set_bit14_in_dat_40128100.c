/* @k10d set_bit14_in_dat_40128100 @ 0x1044d670
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit14_in_dat_40128100(uint32_t param_1,int param_2)

{
  _DAT_40128100 = _DAT_40128100 & 0x30;
  if (param_2 != 0) {
    _DAT_40128100 = _DAT_40128100 | 0x4000;
  }
  return;
}
