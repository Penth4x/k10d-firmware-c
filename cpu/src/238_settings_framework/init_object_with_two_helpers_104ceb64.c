/* @k10d init_object_with_two_helpers_104ceb64 @ 0x104ceb64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 238_settings_framework (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_helpers_104ceb64(cls_105b96e4 *param_1)

{
  int *piVar1;
  void *puVar2;
  uint32_t uVar3;
  int iVar4;
  
  piVar1 = (int *)get_or_create_singleton_object_104cfcea();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  puVar2 = (void *)cls_105b9674_new(0);
  param_1->field_0x4 = (uintptr_t)(puVar2);
  get_or_create_singleton_object_1049aca6();
  uVar3 = invoke_virtual_slots_on_object_1049afb4((int *)__frv_reg_unset(4));
  *(uint32_t *)((char*)puVar2 + 0x2c) = uVar3;
  puVar2 = (void *)((uintptr_t)(param_1->field_0x4));
  get_or_create_singleton_object_104a2fde();
  uVar3 = invoke_virtual_slots_on_object_104a335a((int *)__frv_reg_unset(4));
  *(uint32_t *)((char*)puVar2 + 0x30) = uVar3;
  iVar4 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar4))[2].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar4))[2].adj),0);
  return;
}
