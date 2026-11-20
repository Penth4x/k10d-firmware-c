/* @k10d release_composite_object_members @ 0x104a30e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_composite_object_members(cls_105b6424 *param_1)

{
  int *piVar1;
  void *puVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1->field_0x24 + 8);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0x24 + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)(param_1->field_0x20 + 8);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0x20 + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)(param_1->field_0xc + 0x1c);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0xc + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)(param_1->field_0x1c + 8);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0x1c + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)(param_1->field_0x8 + 0x1c);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0x8 + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)(param_1->field_0x28 + 8);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0x28 + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)(param_1->field_0x10 + 0x1c);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0x10 + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)(param_1->field_0x2c + 8);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0x2c + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)(param_1->field_0x14 + 0x1c);
  (((vtbl_entry*)(iVar4))[4].fn)(param_1->field_0x14 + ((vtbl_entry*)(iVar4))[4].adj);
  iVar4 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar4))[4].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar4))[4].adj));
  piVar1 = (int *)param_1->field_0x30;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x34;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x24));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 8) + 8),3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x20));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 8) + 8),3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0xc));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 0x1c)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 0x1c) + 8),3)
    ;
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x1c));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 8) + 8),3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x8));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 0x1c)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 0x1c) + 8),3)
    ;
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x28));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 8) + 8),3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x10));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 0x1c)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 0x1c) + 8),3)
    ;
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x2c));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 8) + 8),3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x14));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 0x1c)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 0x1c) + 8),3)
    ;
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x18));
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 0x1c)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 0x1c) + 8),3)
    ;
  }
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  pvVar3 = (void *)get_system_heap();
  mempool_release_block((void *)(pvVar3),(void *)(param_1->field_0x38));
  return;
}
