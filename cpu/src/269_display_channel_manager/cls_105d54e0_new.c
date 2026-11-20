/* @k10d cls_105d54e0_new @ 0x1050afe0
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105d54e0; returns param_1)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d54e0 (vtable 0x105d54e0, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105d54e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d54e0_new(cls_105d54e0 *param_1)

{
  if ((param_1 != (cls_105d54e0 *)0x0) ||
     (param_1 = (cls_105d54e0 *)heap_alloc((void *)0x24), param_1 != (cls_105d54e0 *)0x0)) {
    cls_105a2ab0_new((cls_105a2ab0 *)param_1);
    param_1->field_0x8 = (uintptr_t)((void *)0x105d54e0/*ROM*/);
    param_1->field_0xc = 0;
    param_1->field_0x10 = 10;
    param_1->field_0x14 = (uintptr_t)((void *)0x0);
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = (uintptr_t)((void *)0x0);
  }
  return (int)param_1;
}
