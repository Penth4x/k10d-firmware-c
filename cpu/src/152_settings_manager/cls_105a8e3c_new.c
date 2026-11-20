/* @k10d cls_105a8e3c_new @ 0x1046c5fc
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a8e3c; returns param_1)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a8e3c (vtable 0x105a8e3c, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a8e3c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a8e3c_new(cls_105a8e3c *param_1)

{
  if ((param_1 != (cls_105a8e3c *)0x0) ||
     (param_1 = (cls_105a8e3c *)heap_alloc((void *)8), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105a8e3c/*ROM*/;
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
  }
  return (cls_1059e380 *)param_1;
}
