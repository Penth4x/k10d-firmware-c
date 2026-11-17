/* @k10d compute_conditional_offset @ 0x10529b38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_conditional_offset(void *param_1,int param_2,int param_3,int param_4,byte param_5,char param_6,
                char param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t uStack_c;
  
  iVar3 = get_or_create_camera_object();
  iVar5 = **(int **)(iVar3 + 8);
  iVar4 = (**(code **)(iVar5 + 0x34))((int)*(int **)(iVar3 + 8) + (int)*(short *)(iVar5 + 0x30),0);
  iVar3 = get_or_create_camera_object();
  iVar5 = **(int **)(iVar3 + 8);
  iVar3 = (**(code **)(iVar5 + 0x34))((int)*(int **)(iVar3 + 8) + (int)*(short *)(iVar5 + 0x30),1);
  iVar5 = get_or_create_camera_object();
  iVar6 = **(int **)(iVar5 + 8);
  iVar6 = (**(code **)(iVar6 + 0x34))((int)*(int **)(iVar5 + 8) + (int)*(short *)(iVar6 + 0x30),2);
  iVar5 = get_or_create_camera_object();
  iVar7 = **(int **)(iVar5 + 8);
  iVar5 = (**(code **)(iVar7 + 0x34))((int)*(int **)(iVar5 + 8) + (int)*(short *)(iVar7 + 0x30),3);
  cls_1059e05c_new(&uStack_c);
  lookup_table_entry(&uStack_c,param_4,(uint)param_5);
  iVar7 = lookup_table_value_minus_offset(&uStack_c,param_4,(uint)param_5);
  if (param_6 == '\0') {
    iVar3 = iVar4;
  }
  iVar3 = iVar7 + iVar3 + 0x2000;
  if (param_3 == 0) {
    iVar5 = iVar6 + 0xfc8400;
  }
  else {
    iVar5 = iVar5 + 0xfd4500;
  }
  if (param_7 != '\0') {
    iVar5 = 0;
  }
  bVar1 = false;
  bVar2 = false;
  if (param_2 == 0) goto LAB_10529c68;
  if (param_2 == 1) {
LAB_10529c60:
    bVar2 = true;
    bVar1 = !bVar1;
  }
  else {
    if (param_2 == 2) {
      bVar1 = true;
      goto LAB_10529c60;
    }
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = 0;
  }
LAB_10529c68:
  if (bVar2) {
    iVar3 = iVar3 + iVar5;
  }
  virtual_destructor_free_104266ce(&uStack_c,2);
  return iVar3;
}
