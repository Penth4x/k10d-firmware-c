/* @k10d increment_and_clamp_counter_1039bd7a @ 0x1039bd7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_and_clamp_counter_1039bd7a(void *param_1)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_1 + 100) + 1;
  *(ushort *)((int)param_1 + 100) = uVar1;
  if (999 < uVar1) {
    *(uint16_t *)((int)param_1 + 100) = 999;
  }
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x40),(ushort *)((int)param_1 + 100),3,1,'\0');
  return;
}
