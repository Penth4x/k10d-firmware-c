/* @k10d clear_flag_and_call_callback @ 0x105217e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_and_call_callback(cls_105d7b7c *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if ((param_1->field_0x24 == 1) && (param_2 == 1)) {
    param_1->field_0x24 = 0;
    (*(code *)0x10521608/*ROM*/)(param_1->field_0x28);
    uVar1 = 0;
  }
  return uVar1;
}
