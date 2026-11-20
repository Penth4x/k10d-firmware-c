/* @k10d cls_105b69b0_new @ 0x104a8622
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105b69b0; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b69b0 (vtable 0x105b69b0, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105b69b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6a50 * cls_105b69b0_new(cls_105b69b0 *param_1)

{
  if ((param_1 != (cls_105b69b0 *)0x0) ||
     (param_1 = (cls_105b69b0 *)heap_alloc((void *)8), (cls_105b6a50 *)param_1 != (cls_105b6a50 *)0x0)) {
    cls_105b6a50_new((cls_105b6a50 *)param_1);
    ((cls_105b6a50 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105b69b0/*ROM*/);
    ((cls_105b6a50 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
  }
  return (cls_105b6a50 *)param_1;
}
