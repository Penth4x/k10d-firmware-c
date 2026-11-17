/* @k10d set_flag_bit_8_in_dat_40128202 @ 0x1044d8b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_bit_8_in_dat_40128202(uint32_t param_1,int param_2)

{
  _DAT_40128202 = _DAT_40128202 & 3;
  if (param_2 != 0) {
    _DAT_40128202 = _DAT_40128202 | 0x100;
  }
  return;
}
