/* @k10d zero_memory_range @ 0x1045ccf6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_memory_range(void *param_1,uint32_t *param_2,uint32_t *param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *param_2 = 0;
  }
  return;
}
