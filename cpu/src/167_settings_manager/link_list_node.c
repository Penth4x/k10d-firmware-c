/* @k10d link_list_node @ 0x1047a344
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void link_list_node(int param_1,void *param_2,void *param_3)

{
  if (param_2 == (void *)0x0) {
    *(void **)(param_1 + 0xea4c) = param_3;
    if (param_3 != (void *)0x0) {
      *(uint32_t *)((int)param_3 + 0x34) = 0;
    }
  }
  else {
    *(void **)((int)param_2 + 0x38) = param_3;
    if (param_3 != (void *)0x0) {
      *(void **)((int)param_3 + 0x34) = param_2;
    }
  }
  return;
}
