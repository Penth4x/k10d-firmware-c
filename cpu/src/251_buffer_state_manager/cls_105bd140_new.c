/* @k10d cls_105bd140_new @ 0x104e0c8e
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105bd140; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bd140 (vtable 0x105bd140, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105bd140; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bd140_new(cls_105bd140 *param_1)

{
  if ((param_1 != (cls_105bd140 *)0x0) ||
     (param_1 = (cls_105bd140 *)heap_alloc((void *)0x44), param_1 != (cls_105bd140 *)0x0)) {
    cls_105bd93c_new((cls_105bd93c *)param_1);
    param_1->field_0x8 = (uintptr_t)((void *)0x105bd140/*ROM*/);
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x30 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x40 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
  }
  return (int)param_1;
}
