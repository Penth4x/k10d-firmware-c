/* @k10d cls_105bb0b8_new @ 0x104ddfa6
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105bb0b8; returns param_1)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bb0b8 (vtable 0x105bb0b8, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105bb0b8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bb0b8_new(cls_105bb0b8 *param_1)

{
  if ((param_1 != (cls_105bb0b8 *)0x0) ||
     (param_1 = (cls_105bb0b8 *)heap_alloc((void *)0x20), param_1 != (cls_105bb0b8 *)0x0)) {
    param_1->field_0x1c = 0x105bb0b8/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
  }
  return;
}
