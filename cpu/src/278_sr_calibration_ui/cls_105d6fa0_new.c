/* @k10d cls_105d6fa0_new @ 0x1051f60a
 * name: verified (structural evidence: heap_alloc(0x88) when NULL; stores vtable 0x105d6fa0; returns param_1)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6fa0 (vtable 0x105d6fa0, 0x88 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x88) when NULL; stores vtable 0x105d6fa0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d6fa0_new(cls_105d6fa0 *param_1)

{
  if ((param_1 != (cls_105d6fa0 *)0x0) ||
     (param_1 = (cls_105d6fa0 *)heap_alloc((void *)0x88), param_1 != (cls_105d6fa0 *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    param_1->field_0x48 = (uintptr_t)((void *)0x105d6fa0/*ROM*/);
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x54 = 0;
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    param_1->field_0x64 = 0;
    param_1->field_0x74 = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x78 = 0;
    param_1->field_0x6c = 0;
    param_1->field_0x7c = 0;
    param_1->field_0x7d = 0;
    param_1->field_0x7e = 0;
    param_1->field_0x70 = 0;
    param_1->field_0x80 = 0;
    param_1->field_0x84 = 0;
  }
  return (int)param_1;
}
