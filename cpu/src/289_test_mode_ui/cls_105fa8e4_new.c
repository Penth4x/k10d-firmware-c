/* @k10d cls_105fa8e4_new @ 0x1052e91c
 * name: verified (structural evidence: heap_alloc(0x5c) when NULL; stores vtable 0x105fa8e4; returns param_1)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105fa8e4 (vtable 0x105fa8e4, 0x5c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x5c) when NULL; stores vtable 0x105fa8e4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105fa8e4_new(cls_105fa8e4 *param_1)

{
  if ((param_1 != (cls_105fa8e4 *)0x0) ||
     (param_1 = (cls_105fa8e4 *)heap_alloc((void *)0x5c), param_1 != (cls_105fa8e4 *)0x0)) {
    param_1->field_0x58 = (uintptr_t)(&DAT_105fa8e4/*ROM*/);
    param_1->field_0x0 = 0x2000;
    param_1->field_0x4 = 0x2000;
    param_1->field_0x8 = 0x2000;
    param_1->field_0xc = 0x2000;
    param_1->field_0x10 = 0x2000;
    param_1->field_0x12 = 0x2000;
    param_1->field_0x14 = 0x2000;
    param_1->field_0x16 = 0x2000;
    param_1->field_0x18 = 0x2000;
    param_1->field_0x1c = 0x2000;
    param_1->field_0x20 = 0x2000;
    param_1->field_0x24 = 0x2000;
    param_1->field_0x28 = 0x2000;
    param_1->field_0x2a = 0x2000;
    param_1->field_0x2c = 0x2000;
    param_1->field_0x2e = 0x2000;
    param_1->field_0x30 = 0x2000;
    param_1->field_0x34 = 0x2000;
    param_1->field_0x38 = 0x2000;
    param_1->field_0x3c = 0x2000;
    param_1->field_0x40 = 0x2000;
    param_1->field_0x44 = 0x2000;
    param_1->field_0x46 = 0x2000;
    param_1->field_0x48 = 0x2000;
    param_1->field_0x4a = 0x2000;
    param_1->field_0x4c = 0x2000;
    param_1->field_0x4e = 0x2000;
    param_1->field_0x50 = 0x2000;
    param_1->field_0x52 = 0x2000;
    param_1->field_0x54 = 0x2000;
  }
  return;
}
