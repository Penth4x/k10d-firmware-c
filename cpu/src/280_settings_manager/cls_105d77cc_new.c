/* @k10d cls_105d77cc_new @ 0x10521460
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105d77cc; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d77cc (vtable 0x105d77cc, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105d77cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105d7f58 * cls_105d77cc_new(cls_105d77cc *param_1)

{
  if ((param_1 != (cls_105d77cc *)0x0) ||
     (param_1 = (cls_105d77cc *)heap_alloc((void *)0x1c), (cls_105d7f58 *)param_1 != (cls_105d7f58 *)0x0)) {
    cls_105d7f58_new((cls_105d7f58 *)param_1);
    ((cls_105d7f58 *)param_1)->field_0xc = 0x105d77cc/*ROM*/;
    ((cls_105d7f58 *)param_1)->field_0x10 = 0;
    ((cls_105d7f58 *)param_1)->field_0x14 = 0;
    ((cls_105d7f58 *)param_1)->field_0x18 = 0;
  }
  return (cls_105d7f58 *)param_1;
}
