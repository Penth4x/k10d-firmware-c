/* @k10d cls_10562d94_new @ 0x1039573a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x10562d94; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562d94 (vtable 0x10562d94, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x10562d94; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10562d94_new(cls_10562d94 *param_1)

{
  if ((param_1 != (cls_10562d94 *)0x0) ||
     (param_1 = (cls_10562d94 *)heap_alloc((void *)0x40), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10562d94/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_10563940_new((cls_10563940 *)&((cls_10562b98 *)param_1)->field_0x8);
    ((cls_10562b98 *)param_1)->field_0x38 = 0;
    ((cls_10562b98 *)param_1)->field39_0x3c = 1;
    ((cls_10562b98 *)param_1)->field40_0x3d = 0;
    ((cls_10562b98 *)param_1)->field41_0x3e = 0;
  }
  return (cls_10562b98 *)param_1;
}
