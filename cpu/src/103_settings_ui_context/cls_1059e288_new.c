/* @k10d cls_1059e288_new @ 0x104271f0
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1059e288; returns param_1)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e288 (vtable 0x1059e288, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1059e288; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e288 * cls_1059e288_new(cls_1059e288 *param_1)

{
  if ((param_1 != (cls_1059e288 *)0x0) ||
     (param_1 = (cls_1059e288 *)heap_alloc((void *)0x18), param_1 != (cls_1059e288 *)0x0)) {
    param_1->field_0x14 = (uint32_t)&DAT_1059e288/*ROM*/;
    param_1->field_0x0 = 0;
    cls_105a2bf8_new((cls_105a2bf8 *)&param_1->field_0x4);
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
  }
  return param_1;
}
