/* @k10d clamp_and_store_short_value @ 0x10398492
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_store_short_value(void *param_1,int param_2)

{
  *(short *)((int)param_1 + 0x62) = (short)param_2;
  if (999 < param_2) {
    *(uint16_t *)((int)param_1 + 0x62) = 999;
  }
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x44),(ushort *)((int)param_1 + 0x62),3,1,'\0');
  return;
}
