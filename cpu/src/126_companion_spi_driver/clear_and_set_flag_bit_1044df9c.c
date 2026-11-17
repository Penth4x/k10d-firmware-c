/* @k10d clear_and_set_flag_bit_1044df9c @ 0x1044df9c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_and_set_flag_bit_1044df9c(uint32_t param_1,int param_2)

{
  _DAT_40128120 = _DAT_40128120 & 0x273;
  if (param_2 == 0) {
    _DAT_40128120 = _DAT_40128120 | 0x100;
  }
  return;
}
