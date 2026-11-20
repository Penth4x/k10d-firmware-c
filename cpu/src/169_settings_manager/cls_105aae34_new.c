/* @k10d cls_105aae34_new @ 0x1047df4e
 * name: verified (structural evidence: heap_alloc(0x120) when NULL; stores vtable 0x105aae34; returns param_1)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aae34 (vtable 0x105aae34, 0x120 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x120) when NULL; stores vtable 0x105aae34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aae34_new(cls_105aae34 *param_1)

{
  if ((param_1 != (cls_105aae34 *)0x0) ||
     (param_1 = (cls_105aae34 *)heap_alloc((void *)0x120), param_1 != (cls_105aae34 *)0x0)) {
    param_1->field_0x11c = 0x105aae34/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0xffffffff;
    param_1->field_0x8 = 0;
    param_1->field_0xa = 0;
    param_1->field_0xc = 0xffffffff;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x19 = 0;
  }
  return;
}
