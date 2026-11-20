/* @k10d cls_10563098_new @ 0x10397332
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x10563098; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563098 (vtable 0x10563098, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x10563098; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10563098_new(cls_10563098 *param_1)

{
  if ((param_1 != (cls_10563098 *)0x0) || (param_1 = (cls_10563098 *)heap_alloc((void *)0x4c), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uint32_t)(&DAT_10563098/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_10563d1c_new((cls_10563d1c *)&((cls_10562b98 *)param_1)->field_0x8);
    ((cls_10562b98 *)param_1)->field_0x44 = 0;
    ((cls_10562b98 *)param_1)->field_0x48 = 0;
  }
  return (cls_10562b98 *)param_1;
}
