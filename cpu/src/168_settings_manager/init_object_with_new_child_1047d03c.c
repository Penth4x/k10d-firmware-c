/* @k10d init_object_with_new_child_1047d03c @ 0x1047d03c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_new_child_1047d03c(cls_105aabd0 *param_1)

{
  void *puVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  puVar1 = (void *)cls_105aaa50_new((cls_105aaa50 *)0x0);
  param_1->field_0x4 = (uintptr_t)(puVar1);
  uStack_c = 0;
  iVar2 = get_or_create_sram_object_104816ee();
  uStack_c = *(uint32_t *)(iVar2 + 0x14);
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[4].adj),&uStack_c);
  return;
}
