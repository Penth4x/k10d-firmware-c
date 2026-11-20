/* @k10d cls_105d436c_delete @ 0x104fc6c8
 * name: verified (structural evidence: stores vtable 0x105d436c to *this; heap_free(this) under (param_2 & 1))
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d436c (vtable 0x105d436c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d436c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104fc6da) overlaps instruction at (ram,0x104fc6d8)
    */

void cls_105d436c_delete(cls_105d436c *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (cls_105d436c *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105d436c/*ROM*/);
    if (param_1->field_0x4 != 0) {
      iVar1 = *(int *)param_1->field_0x4;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x4 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x8 != 0) {
      iVar1 = *(int *)param_1->field_0x8;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x8 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0xc != 0) {
      iVar1 = *(int *)param_1->field_0xc;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0xc + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x10 != 0) {
      iVar1 = *(int *)param_1->field_0x10;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x10 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x14 != 0) {
      iVar1 = *(int *)param_1->field_0x14;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x14 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x18 != 0) {
      iVar1 = *(int *)param_1->field_0x18;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x18 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x1c != 0) {
      iVar1 = *(int *)param_1->field_0x1c;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x1c + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x20 != 0) {
      iVar1 = *(int *)param_1->field_0x20;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x20 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x24 != 0) {
      iVar1 = *(int *)param_1->field_0x24;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x24 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x28 != 0) {
      iVar1 = *(int *)param_1->field_0x28;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x28 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x2c != 0) {
      iVar1 = *(int *)param_1->field_0x2c;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x2c + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x30 != 0) {
      iVar1 = *(int *)param_1->field_0x30;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x30 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x34 != 0) {
      iVar1 = *(int *)param_1->field_0x34;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x34 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x38 != 0) {
      iVar1 = *(int *)param_1->field_0x38;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x38 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x3c != 0) {
      iVar1 = *(int *)param_1->field_0x3c;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x3c + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x40 != 0) {
      iVar1 = *(int *)param_1->field_0x40;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x40 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x44 != 0) {
      iVar1 = *(int *)param_1->field_0x44;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x44 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x48 != 0) {
      iVar1 = *(int *)param_1->field_0x48;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x48 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x4c != 0) {
      iVar1 = *(int *)param_1->field_0x4c;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x4c + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x50 != 0) {
      iVar1 = *(int *)param_1->field_0x50;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x50 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x54 != 0) {
      iVar1 = *(int *)param_1->field_0x54;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x54 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x58 != 0) {
      iVar1 = *(int *)param_1->field_0x58;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x58 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x5c != 0) {
      iVar1 = *(int *)param_1->field_0x5c;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x5c + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x60 != 0) {
      iVar1 = *(int *)param_1->field_0x60;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x60 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x64 != 0) {
      iVar1 = *(int *)param_1->field_0x64;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x64 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x68 != 0) {
      iVar1 = *(int *)param_1->field_0x68;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x68 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x6c != 0) {
      iVar1 = *(int *)param_1->field_0x6c;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x6c + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x70 != 0) {
      iVar1 = *(int *)param_1->field_0x70;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x70 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x74 != 0) {
      iVar1 = *(int *)param_1->field_0x74;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x74 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x78 != 0) {
      iVar1 = *(int *)param_1->field_0x78;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x78 + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1->field_0x7c != 0) {
      iVar1 = *(int *)param_1->field_0x7c;
      (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x7c + (int)*(short *)(iVar1 + 8),3);
    }
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
