/* @k10d cls_105c1150_new @ 0x104e6412
 * name: verified (structural evidence: heap_alloc(0x320) when NULL; stores vtable 0x105c1150; returns param_1)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c1150 (vtable 0x105c1150, 0x320 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x320) when NULL; stores vtable 0x105c1150; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105c1150_new(cls_105c1150 *param_1)

{
  if ((param_1 != (cls_105c1150 *)0x0) ||
     (param_1 = (cls_105c1150 *)heap_alloc((void *)800), param_1 != (cls_105c1150 *)0x0)) {
    cls_105c0074_new((cls_105c0074 *)param_1);
    param_1->field_0x18 = 0x105c1150/*ROM*/;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    init_0x2f4_byte_object(&param_1->field_0x2c);
  }
  return (int)param_1;
}
