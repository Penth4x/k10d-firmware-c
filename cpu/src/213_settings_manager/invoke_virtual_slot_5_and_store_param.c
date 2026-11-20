/* @k10d invoke_virtual_slot_5_and_store_param @ 0x104ad0de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_5_and_store_param(cls_105b7458 *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (((vtbl_entry*)(param_1->field_0x0))[5].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[5].adj);
    param_1->field_0x8 = param_2;
  }
  return uVar1;
}
