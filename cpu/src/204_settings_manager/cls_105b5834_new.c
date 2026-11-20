/* @k10d cls_105b5834_new @ 0x1049b728
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b5834; returns param_1)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5834 (vtable 0x105b5834, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b5834; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b57dc * cls_105b5834_new(cls_105b5834 *param_1)

{
  if ((param_1 != (cls_105b5834 *)0x0) ||
     (param_1 = (cls_105b5834 *)heap_alloc((void *)0x18), (cls_105b57dc *)param_1 != (cls_105b57dc *)0x0)) {
    cls_105b57dc_new((cls_105b57dc *)param_1);
    cls_105b9734_new((cls_105b9734 *)&((cls_105b57dc *)param_1)->field_0x4);
    ((cls_105b57dc *)param_1)->field_0x0 = 0x105b5834/*ROM*/;
    ((cls_105b57dc *)param_1)->field5_0x8 = 0x105b5864/*ROM*/;
    ((cls_105b57dc *)param_1)->field6_0xc = 0;
    ((cls_105b57dc *)param_1)->field7_0x10 = 0;
    ((cls_105b57dc *)param_1)->field8_0x14 = 0;
  }
  return (cls_105b57dc *)param_1;
}
