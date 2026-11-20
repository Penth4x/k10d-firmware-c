/* @k10d cls_105d66dc_new @ 0x1051af3c
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105d66dc; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d66dc (vtable 0x105d66dc, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105d66dc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d66dc_new(cls_105d66dc *param_1)

{
  if ((param_1 != (cls_105d66dc *)0x0) ||
     (param_1 = (cls_105d66dc *)heap_alloc((void *)0x1c), param_1 != (cls_105d66dc *)0x0)) {
    cls_105b9734_new((cls_105b9734 *)param_1);
    param_1->field_0x4 = 0x105d66dc/*ROM*/;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    cls_105d6dc8_new((cls_105d6dc8 *)&param_1->field_0x18);
  }
  return (int)param_1;
}
