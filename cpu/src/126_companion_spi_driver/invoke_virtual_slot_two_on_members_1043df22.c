/* @k10d invoke_virtual_slot_two_on_members_1043df22 @ 0x1043df22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_on_members_1043df22(cls_105a08e0 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 2;
  iVar1 = 0;
  do {
    if (*(int *)((int)&param_1->field_0x4 + iVar1) != 0) {
      iVar3 = *(int *)(*(int *)((int)&param_1->field_0x4 + iVar1) + 4);
      (((vtbl_entry*)(iVar3))[3].fn)
                (*(int *)((int)&param_1->field_0x4 + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    }
    if (*(int *)((int)&param_1->field_0x8 + iVar1) != 0) {
      iVar3 = *(int *)(*(int *)((int)&param_1->field_0x8 + iVar1) + 4);
      (((vtbl_entry*)(iVar3))[3].fn)
                (*(int *)((int)&param_1->field_0x8 + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    }
    if (*(int *)((int)&param_1->field_0xc + iVar1) != 0) {
      iVar3 = *(int *)(*(int *)((int)&param_1->field_0xc + iVar1) + 4);
      (((vtbl_entry*)(iVar3))[3].fn)
                (*(int *)((int)&param_1->field_0xc + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    }
    if (*(int *)((int)&param_1->field_0x10 + iVar1) != 0) {
      iVar3 = *(int *)(*(int *)((int)&param_1->field_0x10 + iVar1) + 4);
      (((vtbl_entry*)(iVar3))[3].fn)
                (*(int *)((int)&param_1->field_0x10 + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    }
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x10;
  } while (-1 < iVar2);
  if (param_1->field_0x44 != 0) {
    iVar1 = *(int *)(param_1->field_0x44 + 4);
    (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x44 + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  }
  if (param_1->field_0x48 != 0) {
    iVar1 = *(int *)(param_1->field_0x48 + 4);
    (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x48 + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  }
  if (param_1->field_0x4c != 0) {
    iVar1 = *(int *)(param_1->field_0x4c + 4);
    (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x4c + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  }
  if (param_1->field_0x50 != 0) {
    iVar1 = *(int *)(param_1->field_0x50 + 4);
    (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x50 + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  }
  if (param_1->field_0x54 != 0) {
    iVar1 = *(int *)(param_1->field_0x54 + 4);
    (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x54 + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  }
  return 1;
}
