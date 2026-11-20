/* @k10d cls_105643d0_new @ 0x1039fc0a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105643d0; returns param_1)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105643d0 (vtable 0x105643d0, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105643d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_105643d0_new(cls_105643d0 *param_1)

{
  if ((param_1 != (cls_105643d0 *)0x0) ||
     (param_1 = (cls_105643d0 *)heap_alloc((void *)0x40), param_1 != (cls_105643d0 *)0x0)) {
    cls_105b5224_new((cls_105b5224 *)param_1);
    param_1->field_0x0 = (uintptr_t)((void *)0x105643d0/*ROM*/);
    param_1->field_0x4 = 0;
    cls_105b4254_new(&param_1->field5_0x8);
    param_1->field_0x28 = 0;
    param_1->field_0x2c = (uintptr_t)((int *)0x0);
    param_1->field_0x30 = 0;
    param_1->field_0x34 = 180000;
    param_1->field_0x38 = 0;
    param_1->field_0x3c = 0;
  }
  return param_1;
}
