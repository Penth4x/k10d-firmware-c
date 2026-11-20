/* @k10d handle_event_0x1020002 @ 0x104aa654
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 209_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_event_0x1020002(cls_105b6e5c *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  cls_105a5d5c acStack_14 [3];
  
  if (param_2 == 0x1020002) {
    cls_105a5d5c_new(acStack_14);
    copy_six_bytes_between_structs((int)param_1->field_0x10,acStack_14);
    (*(code *)0x1045d458/*ROM*/)(acStack_14,param_1->field_0xc);
    set_flg_obj(&param_1->field_0x1c);
    piVar2 = (int *)((uintptr_t)(param_1->field_0x14));
    if ((piVar2 != (int *)0x0) && (param_1->field_0x18 == '\0')) {
      iVar4 = *piVar2;
      sVar1 = *(short *)(iVar4 + 0x18);
      uVar3 = dispatch_class_state_two_or_three((int)(param_1));
      (((vtbl_entry*)(iVar4))[3].fn)((int)sVar1 + (int)piVar2,0xe0001,uVar3);
    }
    cls_105a5d5c_delete(acStack_14,2);
  }
  return 0;
}
