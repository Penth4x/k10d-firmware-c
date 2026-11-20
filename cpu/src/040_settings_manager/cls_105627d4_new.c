/* @k10d cls_105627d4_new @ 0x103925c8
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x105627d4; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105627d4 (vtable 0x105627d4, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x105627d4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_105627d4_new(cls_105627d4 *param_1)

{
  if ((param_1 != (cls_105627d4 *)0x0) ||
     (param_1 = (cls_105627d4 *)heap_alloc((void *)0x3c), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105627d4/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_1056328c_new((cls_1056328c *)&((cls_10562b98 *)param_1)->field_0x8);
    ((cls_10562b98 *)param_1)->field_0x34 = 0;
    ((cls_10562b98 *)param_1)->field_0x38 = 0;
  }
  return (cls_10562b98 *)param_1;
}
