/* @k10d cls_1059d568_delete @ 0x10422554
 * name: verified (structural evidence: stores vtable 0x1059d568 to *this; heap_free(this) under (param_2 & 1))
 * unit: 098_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059d568 (vtable 0x1059d568): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059d568 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10422566) overlaps instruction at (ram,0x10422564)
    */

void cls_1059d568_delete(cls_1059d568 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (cls_1059d568 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_1059d568/*ROM*/);
    if (param_1->field_0x4 != 0) {
      iVar1 = *(int *)(param_1->field_0x4 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x4 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x8 != 0) {
      iVar1 = *(int *)(param_1->field_0x8 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x8 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0xc != 0) {
      iVar1 = *(int *)(param_1->field_0xc + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0xc + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x10 != 0) {
      iVar1 = *(int *)(param_1->field_0x10 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x10 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x14 != 0) {
      iVar1 = *(int *)(param_1->field_0x14 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x14 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x18 != 0) {
      iVar1 = *(int *)(param_1->field_0x18 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x18 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x1c != 0) {
      iVar1 = *(int *)(param_1->field_0x1c + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x1c + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x20 != 0) {
      iVar1 = *(int *)(param_1->field_0x20 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x20 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x24 != 0) {
      iVar1 = *(int *)(param_1->field_0x24 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x24 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x28 != 0) {
      iVar1 = *(int *)(param_1->field_0x28 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x28 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x2c != 0) {
      iVar1 = *(int *)(param_1->field_0x2c + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x2c + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x30 != 0) {
      iVar1 = *(int *)(param_1->field_0x30 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x30 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x34 != 0) {
      iVar1 = *(int *)(param_1->field_0x34 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x34 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x38 != 0) {
      iVar1 = *(int *)(param_1->field_0x38 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x38 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x3c != 0) {
      iVar1 = *(int *)(param_1->field_0x3c + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x3c + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x40 != 0) {
      iVar1 = *(int *)(param_1->field_0x40 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x40 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x44 != 0) {
      iVar1 = *(int *)(param_1->field_0x44 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x44 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x48 != 0) {
      iVar1 = *(int *)(param_1->field_0x48 + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x48 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x4c != 0) {
      iVar1 = *(int *)(param_1->field_0x4c + 4);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x4c + (int)*(short *)(iVar1 + 8),3);
    }
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
