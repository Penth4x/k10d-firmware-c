/* @k10d clear_or_set_flag_in_param1 @ 0x1043c016
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_or_set_flag_in_param1(void *param_1,int param_2)

{
  if (param_2 == 0) {
    **(ushort **)((int)param_1 + 0x18) = **(ushort **)((int)param_1 + 0x18) & 0xff73;
  }
  else {
    sci_strobe_ctrl(param_1,8,8);
  }
  return;
}
