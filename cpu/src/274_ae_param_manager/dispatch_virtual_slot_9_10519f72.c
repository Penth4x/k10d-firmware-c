/* @k10d dispatch_virtual_slot_9_10519f72 @ 0x10519f72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_9_10519f72(cls_105d6608 *param_1,uint32_t param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    if (param_4 == 0) {
      uVar1 = (((vtbl_entry*)(param_1->field_0x4))[9].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[9].adj,
                         param_2,param_1->field_0x58,1);
    }
    else if (param_4 == 1) {
      uVar1 = (((vtbl_entry*)(param_1->field_0x4))[9].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[9].adj,
                         param_2,param_1->field_0x5c,0);
    }
    else if (param_4 == 2) {
      uVar1 = (((vtbl_entry*)(param_1->field_0x4))[9].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[9].adj,
                         param_2,param_1->field_0x60,1);
    }
  }
  return uVar1;
}
