/* @k10d cls_105fa7c0_new @ 0x1052e810
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105fa7c0; returns param_1)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105fa7c0 (vtable 0x105fa7c0, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105fa7c0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105ab830 * cls_105fa7c0_new(cls_105fa7c0 *param_1)

{
  if ((param_1 != (cls_105fa7c0 *)0x0) ||
     (param_1 = (cls_105fa7c0 *)heap_alloc((void *)4), param_1 != (cls_105fa7c0 *)0x0)) {
    cls_105ab830_new((cls_105ab830 *)param_1);
    ((cls_105ab830 *)param_1)->field_0x0 = (uint32_t)&DAT_105fa7c0/*ROM*/;
  }
  return (cls_105ab830 *)param_1;
}
