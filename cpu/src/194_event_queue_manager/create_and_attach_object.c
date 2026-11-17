/* @k10d create_and_attach_object @ 0x10492012
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t create_and_attach_object(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_ui_root_object();
  uVar1 = (*(code *)0x1052affe/*ROM*/)(uVar1,param_2,param_3,param_4);
  iVar2 = (int)cls_105b41d0_new((uint32_t *)0x0);
  (**(code **)(*(int *)(iVar2 + 8) + 0x14))(*(short *)(*(int *)(iVar2 + 8) + 0x10) + iVar2,uVar1);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  (**(code **)(iVar3 + 0x44))(*(int *)(param_1 + 0xc) + (int)*(short *)(iVar3 + 0x40),iVar2);
  return uVar1;
}
