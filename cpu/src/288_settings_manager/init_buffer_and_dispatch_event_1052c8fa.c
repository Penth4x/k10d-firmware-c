/* @k10d init_buffer_and_dispatch_event_1052c8fa @ 0x1052c8fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 288_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_buffer_and_dispatch_event_1052c8fa(int *param_1,uint32_t param_2,uint32_t param_3,int param_4,int param_5)

{
  uint32_t uVar1;
  int iVar2;
  
  param_1[2] = param_5;
  if (0x200 < param_4) {
    param_4 = 0x200;
  }
  set_field_at_offset_c(param_1,0,param_4);
  uVar1 = invoke_virtual_slot_10_and_map_result(param_1);
  set_field_at_offset_c(param_1,2,uVar1);
  (*(code *)0x104ad2ea/*ROM*/)(param_1[4],param_1[3],param_4,0);
  iVar2 = *(int *)param_1[2];
  iVar2 = (**(code **)(iVar2 + 0x44))(param_1[2] + (int)*(short *)(iVar2 + 0x40),1,param_1[4]);
  if (iVar2 == 2) {
    (**(code **)(*param_1 + 0x24))((int)*(short *)(*param_1 + 0x20) + (int)param_1,2);
  }
  return;
}
