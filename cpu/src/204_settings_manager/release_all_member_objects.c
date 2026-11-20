/* @k10d release_all_member_objects @ 0x1049ae1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 1 on each non-null member object pointer within the struct to
 *   release resources.
 * summary:
 *   The function iterates through multiple member pointers stored at offsets 0x04, 0x08,
 *   0x0c, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, and 0x2c of the object. For each non-
 *   null pointer, it performs a virtual call to slot 1 (offset 0x0c in the vtable) with an
 *   argument of 3. It also performs virtual calls to slot 4 (offset 0x24) on some members
 *   before the slot 1 calls. This pattern is consistent with a cleanup or destructor-like
 *   routine that releases child objects or resources.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_all_member_objects(cls_105b57ac *param_1)

{
  int *piVar1;
  void *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1->field_0x8 + 0x10);
  (((vtbl_entry*)(iVar3))[4].fn)(param_1->field_0x8 + ((vtbl_entry*)(iVar3))[4].adj);
  iVar3 = *(int *)(param_1->field_0xc + 0x10);
  (((vtbl_entry*)(iVar3))[4].fn)(param_1->field_0xc + ((vtbl_entry*)(iVar3))[4].adj);
  iVar3 = *(int *)(param_1->field_0x10 + 0x10);
  (((vtbl_entry*)(iVar3))[4].fn)(param_1->field_0x10 + ((vtbl_entry*)(iVar3))[4].adj);
  iVar3 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar3))[4].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar3))[4].adj));
  piVar1 = (int *)param_1->field_0x2c;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x20;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x24;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x28;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  puVar2 = (void *)(param_1->field_0x14);
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 4)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 4) + 8),3);
  }
  puVar2 = (void *)(param_1->field_0x18);
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 4)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 4) + 8),3);
  }
  puVar2 = (void *)(param_1->field_0x1c);
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 4)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 4) + 8),3);
  }
  puVar2 = (void *)(param_1->field_0x8);
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 0x10)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 0x10) + 8),3)
    ;
  }
  puVar2 = (void *)(param_1->field_0xc);
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 0x10)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 0x10) + 8),3)
    ;
  }
  puVar2 = (void *)(param_1->field_0x10);
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 0x10)))[1].fn)((char*)puVar2 + *(short *)(*(int *)((char*)puVar2 + 0x10) + 8),3)
    ;
  }
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  return;
}
