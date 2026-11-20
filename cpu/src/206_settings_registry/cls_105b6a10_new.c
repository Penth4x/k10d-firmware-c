/* @k10d cls_105b6a10_new @ 0x104a8a96
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b6a10; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6a10 (vtable 0x105b6a10, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b6a10; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a5c3c * cls_105b6a10_new(cls_105b6a10 *param_1)

{
  if ((param_1 != (cls_105b6a10 *)0x0) ||
     (param_1 = (cls_105b6a10 *)heap_alloc((void *)4), param_1 != (cls_105b6a10 *)0x0)) {
    cls_105a5c3c_new((cls_105a5c3c *)param_1);
    ((cls_105a5c3c *)param_1)->field_0x0 = (uintptr_t)((void *)0x105b6a10/*ROM*/);
  }
  return (cls_105a5c3c *)param_1;
}
