/* @k10d init_object_with_two_helpers_104ceb64 @ 0x104ceb64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 238_settings_framework (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_helpers_104ceb64(int param_1)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  piVar1 = (int *)get_or_create_singleton_object_104cfcea();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  iVar2 = cls_105b9674_new(0);
  *(int *)(param_1 + 4) = iVar2;
  get_or_create_singleton_object_1049aca6();
  uVar3 = invoke_virtual_slots_on_object_1049afb4((int *)__frv_reg_unset(4));
  *(uint32_t *)(iVar2 + 0x2c) = uVar3;
  iVar2 = *(int *)(param_1 + 4);
  get_or_create_singleton_object_104a2fde();
  uVar3 = invoke_virtual_slots_on_object_104a335a((int *)__frv_reg_unset(4));
  *(uint32_t *)(iVar2 + 0x30) = uVar3;
  iVar2 = **(int **)(param_1 + 4);
  (**(code **)(iVar2 + 0x14))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x10),0);
  return;
}
