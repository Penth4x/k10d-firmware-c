/* @k10d cls_105aabd0_new @ 0x1047d0ee
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105aabd0; returns param_1)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aabd0 (vtable 0x105aabd0, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105aabd0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105aabd0_new(cls_105aabd0 *param_1)

{
  if ((param_1 != (cls_105aabd0 *)0x0) ||
     (param_1 = (cls_105aabd0 *)heap_alloc((void *)8), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105aabd0/*ROM*/);
    ((cls_1059e380 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
  }
  return (cls_1059e380 *)param_1;
}
