/* @k10d cls_105b73a8_new @ 0x104acc88
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105b73a8; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b73a8 (vtable 0x105b73a8, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105b73a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e2e0 * cls_105b73a8_new(cls_105b73a8 *param_1)

{
  if ((param_1 != (cls_105b73a8 *)0x0) ||
     (param_1 = (cls_105b73a8 *)heap_alloc((void *)0x14), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105b73a8/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105b73f0/*ROM*/;
    ((cls_1059e2e0 *)param_1)->field3_0x10 = 0;
  }
  return (cls_1059e2e0 *)param_1;
}
