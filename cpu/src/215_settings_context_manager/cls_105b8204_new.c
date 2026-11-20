/* @k10d cls_105b8204_new @ 0x104b436c
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b8204; returns param_1)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b8204 (vtable 0x105b8204, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b8204; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105b8204_new(cls_105b8204 *param_1)

{
  if ((param_1 != (cls_105b8204 *)0x0) ||
     (param_1 = (cls_105b8204 *)heap_alloc((void *)4), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105b8204/*ROM*/;
  }
  return (cls_1059e380 *)param_1;
}
