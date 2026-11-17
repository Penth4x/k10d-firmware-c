/* @k10d init_object_with_new_child_1047d03c @ 0x1047d03c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_new_child_1047d03c(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uVar1 = cls_105aaa50_new(0);
  *(uint32_t *)((int)param_1 + 4) = uVar1;
  uStack_c = 0;
  iVar2 = get_or_create_sram_object_104816ee();
  uStack_c = *(uint32_t *)(iVar2 + 0x14);
  iVar2 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar2 + 0x24))
            ((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x20),&uStack_c);
  return;
}
