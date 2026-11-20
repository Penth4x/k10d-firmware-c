/* @k10d cls_105b5c34_new @ 0x1049f980
 * name: verified (structural evidence: heap_alloc(0x240) when NULL; stores vtable 0x105b5c34; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5c34 (vtable 0x105b5c34, 0x240 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x240) when NULL; stores vtable 0x105b5c34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b5c34_new(cls_105b5c34 *param_1)

{
  if ((param_1 != (cls_105b5c34 *)0x0) ||
     (param_1 = (cls_105b5c34 *)heap_alloc((void *)0x240), param_1 != (cls_105b5c34 *)0x0)) {
    cls_105b68b0_new((cls_105b68b0 *)param_1);
    param_1->field_0x8 = 0x105b5c34/*ROM*/;
    cls_105b6a00_new(&param_1->field_0xc,0x13);
    cls_105b6a00_new(&param_1->field_0x44,0x16);
    cls_105b6a00_new(&param_1->field_0x7c,8);
    cls_105b6a00_new(&param_1->field_0xb4,8);
    cls_105b6aa0_new((cls_105b6aa0 *)&param_1->field_0xec,0);
    cls_105b6a00_new(&param_1->field_0xfc,0x5b);
    param_1->field_0x134 = 0;
    param_1->field_0x138 = 0;
    cls_105b5c6c_new((cls_105b5c6c *)&param_1->field_0x13c);
    cls_105b5cbc_new((cls_105b5cbc *)&param_1->field_0x1a0);
    cls_105b6554_new((cls_105b6554 *)&param_1->field_0x1d0);
  }
  return (int)param_1;
}
