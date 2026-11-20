/* @k10d cls_105b6e2c_new @ 0x104aa3e6
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b6e2c; returns param_1)
 * unit: 208_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6e2c (vtable 0x105b6e2c, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b6e2c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105b6e2c_new(cls_105b6e2c *param_1)

{
  if ((param_1 != (cls_105b6e2c *)0x0) ||
     (param_1 = (cls_105b6e2c *)heap_alloc((void *)0xc), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105b6e2c/*ROM*/;
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
    ((cls_1059e380 *)param_1)->field2_0x8 = (uint32_t)(void *)0x0;
  }
  return (cls_1059e380 *)param_1;
}
