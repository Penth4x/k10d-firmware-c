/* @k10d cls_105b3658_new @ 0x10488f96
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105b3658; returns param_1)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3658 (vtable 0x105b3658, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105b3658; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3658_new(cls_105b3658 *param_1)

{
  if ((param_1 != (cls_105b3658 *)0x0) ||
     (param_1 = (cls_105b3658 *)heap_alloc((void *)0x54), param_1 != (cls_105b3658 *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    param_1->field_0x48 = (uint32_t)&DAT_105b3658/*ROM*/;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x44 = 2;
  }
  return (int)param_1;
}
