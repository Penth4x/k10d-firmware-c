/* @k10d toggle_flag_and_notify @ 0x1036ff5a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_and_notify(int param_1)

{
  *(uint *)(param_1 + 0xb4) = (uint)(*(int *)(param_1 + 0xb4) == 0);
  set_setting_0x81((void *)0x800158d4/*SDRAM*/,*(int *)(param_1 + 0xb4) != 0);
  return;
}
