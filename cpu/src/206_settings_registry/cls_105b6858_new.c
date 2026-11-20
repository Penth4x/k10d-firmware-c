/* @k10d cls_105b6858_new @ 0x104a728c
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b6858; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6858 (vtable 0x105b6858, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b6858; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6358 * cls_105b6858_new(cls_105b6858 *param_1)

{
  if ((param_1 != (cls_105b6858 *)0x0) ||
     (param_1 = (cls_105b6858 *)heap_alloc((void *)0x20), param_1 != (cls_105b6858 *)0x0)) {
    cls_105b6358_new((cls_105b6358 *)param_1);
    ((cls_105b6358 *)param_1)->field_0x1c = 0x105b6858/*ROM*/;
  }
  return (cls_105b6358 *)param_1;
}
