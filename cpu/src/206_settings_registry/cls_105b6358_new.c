/* @k10d cls_105b6358_new @ 0x104a2a8e
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b6358; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6358 (vtable 0x105b6358, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b6358; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6358 * cls_105b6358_new(cls_105b6358 *param_1)

{
  if ((param_1 != (cls_105b6358 *)0x0) ||
     (param_1 = (cls_105b6358 *)heap_alloc((void *)0x20), param_1 != (cls_105b6358 *)0x0)) {
    param_1->field_0x1c = 0x105b6358/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
  }
  return param_1;
}
