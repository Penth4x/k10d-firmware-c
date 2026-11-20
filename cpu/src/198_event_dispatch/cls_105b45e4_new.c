/* @k10d cls_105b45e4_new @ 0x10493d10
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b45e4; returns param_1)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b45e4 (vtable 0x105b45e4, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b45e4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b45e4_new(cls_105b45e4 *param_1)

{
  if ((param_1 != (cls_105b45e4 *)0x0) ||
     (param_1 = (cls_105b45e4 *)heap_alloc((void *)0x10), param_1 != (cls_105b45e4 *)0x0)) {
    param_1->field_0xc = (uint32_t)&DAT_105b45e4/*ROM*/;
    param_1->field_0x0 = (uint8_t)(uintptr_t)(void *)0x0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 1;
    param_1->field_0x9 = 0;
  }
  return;
}
