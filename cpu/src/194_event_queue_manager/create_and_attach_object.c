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
  iVar2 = (uintptr_t)(cls_105b41d0_new((cls_105b41d0 *)0x0));
  (((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].fn)(((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].adj + iVar2,uVar1);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  (((vtbl_entry*)(iVar3))[8].fn)(*(int *)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar3))[8].adj,iVar2);
  return uVar1;
}
