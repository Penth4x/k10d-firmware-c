/* @k10d release_twenty_one_members @ 0x104fbd66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Iterates through 21 pointer fields in a 0x80-byte object, invoking virtual slots 2 and
 *   1 on each non-null member, then nulling the field.
 * summary:
 *   The function acts as a destructor or cleanup routine for a class containing 21 embedded
 *   objects. For each field offset (from 0x4 to 0x7c), it checks if the pointer is non-
 *   null, calls virtual slot 2 (offset 0x24) and virtual slot 1 (offset 0xc) on the target
 *   object, and sets the field to zero. It also calls get_or_create_sram_object_104ecffc
 *   once to obtain a pointer and invokes virtual slot 2 on it. The pattern of calling two
 *   virtual methods before nulling suggests a standard C++ member destruction sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_twenty_one_members(cls_105d436c *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1->field_0x7c != 0) {
    iVar2 = *(int *)param_1->field_0x7c;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x7c + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x7c != 0) {
    iVar2 = *(int *)param_1->field_0x7c;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x7c + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x7c = 0;
  if (param_1->field_0x68 != 0) {
    iVar2 = *(int *)param_1->field_0x68;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x68 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x68 != 0) {
    iVar2 = *(int *)param_1->field_0x68;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x68 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x68 = 0;
  if (param_1->field_0x4 != 0) {
    iVar2 = *(int *)param_1->field_0x4;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x4 != 0) {
    iVar2 = *(int *)param_1->field_0x4;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x4 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  if (param_1->field_0xc != 0) {
    iVar2 = *(int *)param_1->field_0xc;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0xc != 0) {
    iVar2 = *(int *)param_1->field_0xc;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0xc + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0xc = (uintptr_t)((void *)0x0);
  if (param_1->field_0x3c != 0) {
    iVar2 = *(int *)param_1->field_0x3c;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x3c + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x3c != 0) {
    iVar2 = *(int *)param_1->field_0x3c;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x3c + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x3c = (uintptr_t)((void *)0x0);
  if (param_1->field_0x20 != 0) {
    iVar2 = *(int *)param_1->field_0x20;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x20 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x20 != 0) {
    iVar2 = *(int *)param_1->field_0x20;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x20 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x20 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x4c != 0) {
    iVar2 = *(int *)param_1->field_0x4c;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x4c != 0) {
    iVar2 = *(int *)param_1->field_0x4c;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x4c + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x4c = 0;
  if (param_1->field_0x18 != 0) {
    iVar2 = *(int *)param_1->field_0x18;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x18 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x18 != 0) {
    iVar2 = *(int *)param_1->field_0x18;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x18 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x18 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x64 != 0) {
    iVar2 = *(int *)param_1->field_0x64;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x64 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x64 != 0) {
    iVar2 = *(int *)param_1->field_0x64;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x64 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x64 = 0;
  if (param_1->field_0x34 != 0) {
    iVar2 = *(int *)param_1->field_0x34;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x34 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x34 != 0) {
    iVar2 = *(int *)param_1->field_0x34;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x34 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x34 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x44 != 0) {
    iVar2 = *(int *)param_1->field_0x44;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x44 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x44 != 0) {
    iVar2 = *(int *)param_1->field_0x44;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x44 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x44 = 0;
  if (param_1->field_0x50 != 0) {
    iVar2 = *(int *)param_1->field_0x50;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x50 != 0) {
    iVar2 = *(int *)param_1->field_0x50;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x50 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x50 = 0;
  if (param_1->field_0x54 != 0) {
    iVar2 = *(int *)param_1->field_0x54;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x54 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x54 != 0) {
    iVar2 = *(int *)param_1->field_0x54;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x54 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x54 = 0;
  piVar1 = (int *)get_or_create_sram_object_104ecffc();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  if (param_1->field_0x8 != 0) {
    iVar2 = *(int *)param_1->field_0x8;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x8 != 0) {
    iVar2 = *(int *)param_1->field_0x8;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x8 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x8 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x10 != 0) {
    iVar2 = *(int *)param_1->field_0x10;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x10 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x10 != 0) {
    iVar2 = *(int *)param_1->field_0x10;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x10 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x10 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x1c != 0) {
    iVar2 = *(int *)param_1->field_0x1c;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x1c + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x1c != 0) {
    iVar2 = *(int *)param_1->field_0x1c;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x1c + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x1c = (uintptr_t)((void *)0x0);
  if (param_1->field_0x24 != 0) {
    iVar2 = *(int *)param_1->field_0x24;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x24 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x24 != 0) {
    iVar2 = *(int *)param_1->field_0x24;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x24 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x24 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x2c != 0) {
    iVar2 = *(int *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x2c != 0) {
    iVar2 = *(int *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x2c + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x2c = (uintptr_t)((void *)0x0);
  if (param_1->field_0x30 != 0) {
    iVar2 = *(int *)param_1->field_0x30;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x30 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x30 != 0) {
    iVar2 = *(int *)param_1->field_0x30;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x30 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x30 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x6c != 0) {
    iVar2 = *(int *)param_1->field_0x6c;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x6c + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x6c != 0) {
    iVar2 = *(int *)param_1->field_0x6c;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x6c + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x6c = 0;
  if (param_1->field_0x38 != 0) {
    iVar2 = *(int *)param_1->field_0x38;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x38 != 0) {
    iVar2 = *(int *)param_1->field_0x38;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x38 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x38 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x40 != 0) {
    iVar2 = *(int *)param_1->field_0x40;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x40 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x40 != 0) {
    iVar2 = *(int *)param_1->field_0x40;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x40 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x40 = 0;
  if (param_1->field_0x5c != 0) {
    iVar2 = *(int *)param_1->field_0x5c;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x5c + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x5c != 0) {
    iVar2 = *(int *)param_1->field_0x5c;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x5c + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x5c = 0;
  if (param_1->field_0x60 != 0) {
    iVar2 = *(int *)param_1->field_0x60;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x60 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x60 != 0) {
    iVar2 = *(int *)param_1->field_0x60;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x60 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x60 = 0;
  if (param_1->field_0x58 != 0) {
    iVar2 = *(int *)param_1->field_0x58;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x58 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x58 != 0) {
    iVar2 = *(int *)param_1->field_0x58;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x58 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x58 = 0;
  if (param_1->field_0x78 != 0) {
    iVar2 = *(int *)param_1->field_0x78;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x78 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x78 != 0) {
    iVar2 = *(int *)param_1->field_0x78;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x78 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x78 = 0;
  if (param_1->field_0x74 != 0) {
    iVar2 = *(int *)param_1->field_0x74;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x74 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x74 != 0) {
    iVar2 = *(int *)param_1->field_0x74;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x74 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x74 = 0;
  if (param_1->field_0x28 != 0) {
    iVar2 = *(int *)param_1->field_0x28;
    (((vtbl_entry*)(iVar2))[4].fn)
              ((void *)((int)param_1->field_0x28 + (int)((vtbl_entry*)(iVar2))[4].adj));
  }
  if (param_1->field_0x28 != 0) {
    iVar2 = *(int *)param_1->field_0x28;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x28 + (int)*(short *)(iVar2 + 8)),3);
  }
  param_1->field_0x28 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x48 != 0) {
    iVar2 = *(int *)param_1->field_0x48;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x48 != 0) {
    iVar2 = *(int *)param_1->field_0x48;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x48 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x48 = 0;
  if (param_1->field_0x14 != 0) {
    iVar2 = *(int *)param_1->field_0x14;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar2))[4].adj);
  }
  if (param_1->field_0x14 != 0) {
    iVar2 = *(int *)param_1->field_0x14;
    (((vtbl_entry*)(iVar2))[1].fn)((int)param_1->field_0x14 + (int)*(short *)(iVar2 + 8),3);
  }
  param_1->field_0x14 = (uintptr_t)((void *)0x0);
  return;
}
