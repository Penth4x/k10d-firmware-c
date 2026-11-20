/* @k10d cls_105b857c_new @ 0x104b51e0
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105b857c; returns param_1)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b857c (vtable 0x105b857c, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105b857c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105b857c_new(cls_105b857c *param_1)

{
  if ((param_1 != (cls_105b857c *)0x0) ||
     (param_1 = (cls_105b857c *)heap_alloc((void *)8), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105b857c/*ROM*/;
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
  }
  return (cls_1059e380 *)param_1;
}
