/* @k10d map_mode_index_to_gpio_value @ 0x10451d86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void map_mode_index_to_gpio_value(uint32_t param_1,int param_2)

{
  _DAT_400600d8 = 0;
  if (param_2 == 0) {
    _DAT_400600d8 = 0;
  }
  else if (param_2 == 1) {
    _DAT_400600d8 = 2;
  }
  else if (param_2 == 2) {
    _DAT_400600d8 = 3;
  }
  else if (param_2 == 3) {
    _DAT_400600d8 = 1;
  }
  return;
}
