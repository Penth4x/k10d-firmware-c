/* @k10d cls_105c0074_new @ 0x104e337a
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105c0074; returns param_1)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c0074 (vtable 0x105c0074, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105c0074; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c0074_new(cls_105c0074 *param_1)

{
  if ((param_1 != (cls_105c0074 *)0x0) ||
     (param_1 = (cls_105c0074 *)heap_alloc((void *)0x1c), param_1 != (cls_105c0074 *)0x0)) {
    param_1->field_0x18 = 0x105c0074/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = (uintptr_t)((void *)0x0);
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x16 = 1;
    param_1->field_0x17 = 0;
  }
  return;
}
