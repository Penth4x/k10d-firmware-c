/* @k10d handle_event_0x90001 @ 0x104aa5c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 209_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_event_0x90001(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (param_2 == 0x90001) {
    cls_105a5d5c_new((void *)auStack_14);
    copy_six_bytes_between_structs(*(int *)(param_1 + 0x10),auStack_14);
    (*(code *)0x1045d458/*ROM*/)(auStack_14,*(uint32_t *)(param_1 + 0xc));
    set_flg_obj((uint32_t *)(param_1 + 0x1c));
    piVar2 = *(int **)(param_1 + 0x14);
    if ((piVar2 != (int *)0x0) && (*(char *)(param_1 + 0x18) == '\0')) {
      iVar4 = *piVar2;
      sVar1 = *(short *)(iVar4 + 0x18);
      uVar3 = dispatch_class_state_two_or_three(param_1);
      (**(code **)(iVar4 + 0x1c))((int)sVar1 + (int)piVar2,0xe0001,uVar3);
    }
    cls_105a5d5c_delete((void *)auStack_14,2);
  }
  return 1;
}
