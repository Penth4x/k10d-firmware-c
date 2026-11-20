/* @k10d cls_105d65d0_new @ 0x105180b0
 * name: verified (structural evidence: heap_alloc(0x254) when NULL; stores vtable 0x105d65d0; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d65d0 (vtable 0x105d65d0, 0x254 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x254) when NULL; stores vtable 0x105d65d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d65d0": ignoring overlapping field "field_0x1e4" */

int cls_105d65d0_new(cls_105d65d0 *param_1)

{
  if ((param_1 != (cls_105d65d0 *)0x0) ||
     (param_1 = (cls_105d65d0 *)heap_alloc((void *)0x254), param_1 != (cls_105d65d0 *)0x0)) {
    cls_105b68b0_new((cls_105b68b0 *)param_1);
    param_1->field_0x8 = 0x105d65d0/*ROM*/;
    cls_105b6a00_new(&param_1->field_0xc,0x25);
    cls_105b6a00_new(&param_1->field_0x44,0x1c);
    cls_105b6a00_new(&param_1->field_0x7c,0x13);
    cls_105b6a00_new(&param_1->field_0xb4,0x14);
    cls_105b6aa0_new((cls_105b6aa0 *)&param_1->field_0xec,1);
    cls_105b6a00_new(&param_1->field_0xfc,0x5a);
    param_1->field_0x134 = 0;
    param_1->field_0x138 = 0;
    param_1->field_0x13c = 0;
    cls_105d6608_new((cls_105d6608 *)&param_1->field_0x140);
    cls_105b6174_new(&param_1->field_0x1b4);
    cls_105b6554_new((cls_105b6554 *)&((uint32_t *)&(param_1->field_0x1b4))[12]);
  }
  return (int)param_1;
}
