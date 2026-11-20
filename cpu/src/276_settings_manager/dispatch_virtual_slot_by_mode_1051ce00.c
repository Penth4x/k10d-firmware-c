/* @k10d dispatch_virtual_slot_by_mode_1051ce00 @ 0x1051ce00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_by_mode_1051ce00(cls_105d6c88 *param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  if (param_3 == 1) {
    uVar1 = (((vtbl_entry*)(param_1->field_0x4))[9].fn)
                      (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[9].adj);
  }
  else if (param_3 == 2) {
    uVar1 = (((vtbl_entry*)(param_1->field_0x4))[10].fn)
                      (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[10].adj);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
