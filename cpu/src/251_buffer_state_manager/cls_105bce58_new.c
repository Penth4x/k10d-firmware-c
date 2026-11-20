/* @k10d cls_105bce58_new @ 0x104e0736
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105bce58; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bce58 (vtable 0x105bce58, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105bce58; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bce58_new(cls_105bce58 *param_1)

{
  if ((param_1 != (cls_105bce58 *)0x0) ||
     (param_1 = (cls_105bce58 *)heap_alloc((void *)0x30), param_1 != (cls_105bce58 *)0x0)) {
    cls_105b7da4_new((cls_105b7da4 *)param_1);
    param_1->field_0x8 = 0x105bce58/*ROM*/;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
  }
  return (int)param_1;
}
