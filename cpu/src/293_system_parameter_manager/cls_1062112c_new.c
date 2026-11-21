/* @k10d cls_1062112c_new @ 0x10535a46
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x1062112c; returns param_1)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1062112c (vtable 0x1062112c, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x1062112c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1062112c_new(cls_1062112c *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_1062112c *)0x0) ||
     (param_1 = (cls_1062112c *)heap_alloc((void *)0x70), param_1 != (cls_1062112c *)0x0)) {
    param_1->field_0x6c = (uintptr_t)(&DAT_1062112c);
    iVar1 = 0;
    param_1->field_0x0 = 0;
    param_1->field_0x1 = 0;
    param_1->field_0x2 = 0;
    param_1->field_0x3 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x5 = 0;
    param_1->field_0x6 = 0;
    param_1->field_0x7 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0x9 = 0;
    param_1->field_0xa = 0;
    param_1->field_0xc = 0;
    param_1->field_0xd = 0;
    param_1->field_0xe = 0;
    param_1->field_0xf = 0;
    param_1->field_0x10 = 1;
    param_1->field_0x11 = 0;
    param_1->field_0x12 = 0;
    param_1->field_0x13 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x15 = 0;
    param_1->field_0x16 = 0;
    param_1->field_0x17 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x19 = 0;
    param_1->field_0x1a = 0;
    param_1->field_0x1b = 1;
    param_1->field_0x1c = 1;
    param_1->field_0x1d = 0;
    param_1->field_0x1e = 0;
    param_1->field_0x1f = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x22 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0x20;
    param_1->field_0x2e = 0x20;
    param_1->field_0x30 = 0;
    param_1->field_0x32 = 0;
    param_1->field_0x34 = 8;
    param_1->field_0x36 = 0;
    param_1->field_0x38 = 0;
    param_1->field_0x3a = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x3e = 0;
    param_1->field_0x40 = 0;
    iVar2 = 1;
    do {
      *(uint32_t *)((int)&param_1->field_0x44 + iVar1) = 0;
      *(uint32_t *)((int)&param_1->field_0x48 + iVar1) = 0;
      *(uint32_t *)((int)&param_1->field_0x4c + iVar1) = 0;
      *(uint32_t *)((int)&param_1->field_0x50 + iVar1) = 0;
      *(uint32_t *)((int)&param_1->field_0x54 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar2);
  }
  return;
}
