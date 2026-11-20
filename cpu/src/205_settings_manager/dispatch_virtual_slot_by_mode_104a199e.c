/* @k10d dispatch_virtual_slot_by_mode_104a199e @ 0x104a199e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_by_mode_104a199e(cls_105b6174 *param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_3 == 1) {
    uVar1 = (((vtbl_entry*)(param_1->field_0x4))[9].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[9].adj);
  }
  else if (param_3 == 2) {
    uVar1 = (((vtbl_entry*)(param_1->field_0x4))[10].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[10].adj);
  }
  return uVar1;
}
