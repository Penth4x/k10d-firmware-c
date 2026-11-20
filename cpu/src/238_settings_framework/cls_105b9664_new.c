/* @k10d cls_105b9664_new @ 0x104ce670
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105b9664; returns param_1)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9664 (vtable 0x105b9664, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105b9664; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9664_new(cls_105b9664 *param_1,uint32_t param_2)

{
  if ((param_1 != (cls_105b9664 *)0x0) ||
     (param_1 = (cls_105b9664 *)heap_alloc((void *)0x2c), param_1 != (cls_105b9664 *)0x0)) {
    param_1->field_0x28 = 0x105b9664/*ROM*/;
    param_1->field_0x0 = param_2;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
  }
  return;
}
