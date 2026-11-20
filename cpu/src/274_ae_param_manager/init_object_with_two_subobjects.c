/* @k10d init_object_with_two_subobjects @ 0x10516c24
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_subobjects(cls_105d6450 *param_1)

{
  void *puVar1;
  int iVar2;
  
  puVar1 = (void *)heap_alloc((void *)0x161d4);
  if (puVar1 == 0) {
    puVar1 = (void *)0x0;
  }
  else {
    allocate_and_init_seven_entry_array(puVar1);
  }
  param_1->field_0x8 = (uint32_t)(puVar1);
  iVar2 = get_or_create_singleton_object_104fb12e();
  puVar1 = (void *)heap_alloc((void *)0x358);
  if (puVar1 == 0) {
    puVar1 = (void *)0x0;
  }
  else {
    cls_105d624c_new(puVar1);
  }
  param_1->field_0x4 = (uint32_t)(puVar1);
  *(uint32_t *)((char*)puVar1 + 0x34) = *(uint32_t *)(iVar2 + 0x14);
  *(uint32_t *)(param_1->field_0x4 + 0x38) = *(uint32_t *)(iVar2 + 0xc);
  *(uint32_t *)(param_1->field_0x4 + 0x3c) = *(uint32_t *)(iVar2 + 0x3c);
  *(uint32_t *)(param_1->field_0x4 + 0x40) = *(uint32_t *)(iVar2 + 0x20);
  *(uint32_t *)(param_1->field_0x4 + 0x44) = *(uint32_t *)(iVar2 + 0x4c);
  *(void **)(param_1->field_0x4 + 0x58) = (void *)(param_1->field_0x8);
  *(uint32_t *)(param_1->field_0x4 + 0x48) = *(uint32_t *)(iVar2 + 0x18);
  *(uint32_t *)(param_1->field_0x4 + 0x4c) = *(uint32_t *)(iVar2 + 100);
  *(uint32_t *)(param_1->field_0x4 + 0x50) = *(uint32_t *)(iVar2 + 4);
  *(uint32_t *)(param_1->field_0x4 + 0x54) = *(uint32_t *)(iVar2 + 0x34);
  *(uint32_t *)(param_1->field_0x4 + 0x5c) = *(uint32_t *)(iVar2 + 0x68);
  *(uint32_t *)(param_1->field_0x4 + 0x60) = *(uint32_t *)(iVar2 + 0x54);
  *(uint32_t *)(param_1->field_0x4 + 100) = *(uint32_t *)(iVar2 + 0x7c);
  puVar1 = (void *)get_or_create_singleton_object_1050b118();
  param_1->field_0xc = (uint32_t)(puVar1);
  *(void **)((char*)puVar1 + 0x2c) = (void *)(param_1->field_0x8);
  *(void **)(param_1->field_0xc + 0x28) = (void *)(param_1->field_0x4);
  *(uint32_t *)(param_1->field_0xc + 0x30) = *(uint32_t *)(iVar2 + 0xc);
  *(uint32_t *)(param_1->field_0xc + 0x34) = *(uint32_t *)(iVar2 + 0x3c);
  *(uint32_t *)(param_1->field_0xc + 0x38) = *(uint32_t *)(iVar2 + 0x20);
  *(uint32_t *)(param_1->field_0xc + 0x3c) = *(uint32_t *)(iVar2 + 0x4c);
  *(uint32_t *)(param_1->field_0xc + 0x40) = *(uint32_t *)(iVar2 + 0x18);
  *(uint32_t *)(param_1->field_0xc + 0x44) = *(uint32_t *)(iVar2 + 100);
  *(uint32_t *)(param_1->field_0xc + 0x48) = *(uint32_t *)(iVar2 + 4);
  *(uint32_t *)(param_1->field_0xc + 0x4c) = *(uint32_t *)(iVar2 + 0x34);
  *(uint32_t *)(param_1->field_0xc + 0x50) = *(uint32_t *)(iVar2 + 0x54);
  *(uint32_t *)(param_1->field_0xc + 0x54) = *(uint32_t *)(iVar2 + 0x50);
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[2].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[2].adj),0);
  iVar2 = *(int *)param_1->field_0xc;
  (((vtbl_entry*)(iVar2))[2].fn)
            ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar2))[2].adj),0);
  return;
}
