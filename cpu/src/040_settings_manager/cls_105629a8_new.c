/* @k10d cls_105629a8_new @ 0x10393854
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x105629a8; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105629a8 (vtable 0x105629a8, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x105629a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_105629a8_new(cls_105629a8 *param_1)

{
  if ((param_1 != (cls_105629a8 *)0x0) ||
     (param_1 = (cls_105629a8 *)heap_alloc((void *)0x38), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105629a8/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_105634f0_new((cls_105634f0 *)&((cls_10562b98 *)param_1)->field_0x8);
    ((cls_10562b98 *)param_1)->field_0x34 = 0;
  }
  return (cls_10562b98 *)param_1;
}
