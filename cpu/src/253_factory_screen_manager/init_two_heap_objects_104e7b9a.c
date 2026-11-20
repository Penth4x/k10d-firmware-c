/* @k10d init_two_heap_objects_104e7b9a @ 0x104e7b9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_heap_objects_104e7b9a(cls_105c14c8 *param_1)

{
  int iVar1;
  int iVar2;
  void *puVar3;
  cls_1059c10c *pcVar4;
  int *piVar5;
  
  iVar1 = get_or_create_singleton_object_104fb12e();
  iVar2 = get_or_init_singleton_object_10516bf2();
  puVar3 = (void *)heap_alloc((void *)400);
  if (puVar3 == 0) {
    puVar3 = (void *)0x0;
  }
  else {
    cls_105c1610_new(puVar3);
  }
  param_1->field_0x8 = (uintptr_t)(puVar3);
  *(uint32_t *)((char*)puVar3 + 0x30) = *(uint32_t *)(iVar2 + 8);
  *(uint32_t *)(param_1->field_0x8 + 0x2c) = *(uint32_t *)(iVar2 + 4);
  *(uint32_t *)(param_1->field_0x8 + 0x34) = *(uint32_t *)(iVar2 + 0xc);
  pcVar4 = (cls_1059c10c *)heap_alloc((void *)0x15d4);
  if (pcVar4 == (cls_1059c10c *)0x0) {
    pcVar4 = (cls_1059c10c *)0x0;
  }
  else {
    cls_1059c10c_new(pcVar4);
  }
  param_1->field_0x4 = (uintptr_t)((void *)pcVar4);
  pcVar4->field_0x4c = *(uint32_t *)(iVar1 + 0x6c);
  *(uint32_t *)(param_1->field_0x4 + 0x50) = *(uint32_t *)(iVar2 + 4);
  *(uint32_t *)(param_1->field_0x4 + 0x54) = *(uint32_t *)(iVar2 + 8);
  *(void **)(param_1->field_0x4 + 0x58) = (void *)((uintptr_t)(param_1->field_0x8));
  *(uint32_t *)(param_1->field_0x4 + 0x5c) = *(uint32_t *)(iVar1 + 0x74);
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[2].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[2].adj),0);
  *(void **)(param_1->field_0x8 + 0x38) = (void *)((uintptr_t)(param_1->field_0x4));
  iVar1 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar1))[2].fn)
            ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[2].adj),0);
  piVar5 = (int *)get_or_create_sram_object_1039fa94();
  (((vtbl_entry*)(*piVar5))[2].fn)((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,0);
  return;
}
