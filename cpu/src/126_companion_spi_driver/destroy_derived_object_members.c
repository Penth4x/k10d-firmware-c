/* @k10d destroy_derived_object_members @ 0x10446950
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_derived_object_members(cls_105a18b4 *param_1)

{
  void **ppuVar1;
  void *puVar2;
  int iVar3;
  
  ppuVar1 = &param_1->field_0x4;
  (((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[4].fn)((char*)*ppuVar1 + ((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[4].adj)
  ;
  if (*ppuVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[1].fn)((char*)*ppuVar1 + *(short *)(*(int *)((char*)*ppuVar1 + 4) + 8),3)
    ;
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0xc));
  if (puVar2 != 0) {
    cls_105a2be0_delete(puVar2,2);
    heap_free((int)puVar2);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  param_1->field_0xc = (uintptr_t)((void *)0x0);
  (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[4].fn)
            (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[4].adj);
  if (param_1->field_0x8 != 0) {
    (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[1].fn)
              (param_1->field_0x8 + *(short *)(*(int *)(param_1->field_0x8 + 4) + 8),3);
  }
  puVar2 = (void *)((uintptr_t)(param_1->field_0x10));
  if (puVar2 != 0) {
    cls_105a2be0_delete(puVar2,2);
    heap_free((int)puVar2);
  }
  param_1->field_0x8 = (uintptr_t)((void *)0x0);
  param_1->field_0x10 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x14 != 0) {
    iVar3 = *(int *)(param_1->field_0x14 + 4);
    (((vtbl_entry*)(iVar3))[1].fn)(param_1->field_0x14 + *(short *)(iVar3 + 8),3);
  }
  if (param_1->field_0x18 != 0) {
    iVar3 = *(int *)(param_1->field_0x18 + 4);
    (((vtbl_entry*)(iVar3))[1].fn)(param_1->field_0x18 + *(short *)(iVar3 + 8),3);
  }
  if (param_1->field_0x1c != 0) {
    iVar3 = *(int *)(param_1->field_0x1c + 4);
    (((vtbl_entry*)(iVar3))[1].fn)(param_1->field_0x1c + *(short *)(iVar3 + 8),3);
  }
  return;
}
