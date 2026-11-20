/* @k10d cls_105b5b0c_new @ 0x1049cb1c
 * name: verified (structural evidence: heap_alloc(0x250) when NULL; stores vtable 0x105b5b0c; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5b0c (vtable 0x105b5b0c, 0x250 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x250) when NULL; stores vtable 0x105b5b0c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b5b0c_new(cls_105b5b0c *param_1)

{
  if ((param_1 != (cls_105b5b0c *)0x0) ||
     (param_1 = (cls_105b5b0c *)heap_alloc((void *)0x250), param_1 != (cls_105b5b0c *)0x0)) {
    cls_105b68b0_new((cls_105b68b0 *)param_1);
    param_1->field_0x8 = 0x105b5b0c/*ROM*/;
    cls_105b6a00_new(&param_1->field_0xc,0xe);
    cls_105b6a00_new(&param_1->field_0x44,0x1f);
    cls_105b6a00_new(&param_1->field_0x7c,2);
    cls_105b6a00_new(&param_1->field_0xb4,6);
    cls_105b6aa0_new((cls_105b6aa0 *)&param_1->field_0xec,0);
    cls_105b6a00_new(&param_1->field_0xfc,0x48);
    param_1->field_0x134 = 0;
    param_1->field_0x138 = 0;
    param_1->field_0x13c = 0;
    param_1->field_0x140 = 0;
    cls_105d6ce0_new((cls_105d6ce0 *)&param_1->field_0x144);
    cls_105d6c88_new((cls_105d6c88 *)&param_1->field_0x1a8);
    cls_105b6554_new((cls_105b6554 *)&param_1->field_0x1dc);
    param_1->field_0x24c = 0;
  }
  return (int)param_1;
}
