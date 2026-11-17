/* @k10d store_pointer_in_array_and_notify @ 0x104a9c78
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_pointer_in_array_and_notify(void *param_1,void *param_2,uint32_t param_3,int param_4)

{
  *(void **)(*(int *)((int)param_1 + 0x14) + param_4 * 4) = param_2;
  write_to_dynamic_array((int)param_1,param_4,param_3);
  return;
}
