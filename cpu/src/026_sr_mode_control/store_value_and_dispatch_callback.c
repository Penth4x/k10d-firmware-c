/* @k10d store_value_and_dispatch_callback @ 0x1036e982
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_dispatch_callback(int param_1,uint32_t param_2)

{
  uint8_t uVar1;
  
  *(uint32_t *)(param_1 + 0xb0) = param_2;
  uVar1 = (*(code *)0x1036ff30/*ROM*/)();
  set_setting_0x70((int *)(0x800158d4/*SDRAM*/),(uint32_t)(uVar1));
  return;
}
