/* @k10d init_buffer_and_dispatch_event_1052c8fa @ 0x1052c8fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 288_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_buffer_and_dispatch_event_1052c8fa(cls_105fa6ac *param_1,uint32_t param_2,uint32_t param_3,int param_4,
                 int param_5)

{
  uint32_t uVar1;
  int iVar2;
  
  param_1->field_0x8 = param_5;
  if (0x200 < param_4) {
    param_4 = 0x200;
  }
  set_field_at_offset_c(param_1,0,param_4);
  uVar1 = invoke_virtual_slot_10_and_map_result(param_1);
  set_field_at_offset_c(param_1,2,uVar1);
  (*(code *)0x104ad2ea/*ROM*/)(param_1->field_0x10,param_1->field_0xc,param_4,0);
  iVar2 = *(int *)param_1->field_0x8;
  iVar2 = (((vtbl_entry*)(iVar2))[8].fn)
                    ((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar2))[8].adj,1,param_1->field_0x10);
  if (iVar2 == 2) {
    (((vtbl_entry*)(param_1->field_0x0))[4].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[4].adj,2);
  }
  return;
}
