/* @k10d cls_1059f170_new @ 0x104330b2
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x1059f170; returns param_1)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059f170 (vtable 0x1059f170, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x1059f170; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059f170_new(cls_1059f170 *param_1)

{
  if ((param_1 != (cls_1059f170 *)0x0) ||
     (param_1 = (cls_1059f170 *)heap_alloc((void *)0x14), param_1 != (cls_1059f170 *)0x0)) {
    param_1->field_0x10 = (uint32_t)&DAT_1059f170/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
  }
  return;
}
