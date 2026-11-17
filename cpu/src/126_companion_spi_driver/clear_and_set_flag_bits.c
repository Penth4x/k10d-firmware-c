/* @k10d clear_and_set_flag_bits @ 0x1044df66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_and_set_flag_bits(uint32_t param_1,int param_2)

{
  _DAT_40128120 = _DAT_40128120 & 0x173;
  if (param_2 == 0) {
    _DAT_40128120 = _DAT_40128120 | 0x200;
  }
  return;
}
