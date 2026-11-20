/* @k10d cls_105b41d0_new @ 0x10491d82
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b41d0; returns param_1)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b41d0 (vtable 0x105b41d0, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b41d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b41d0 * cls_105b41d0_new(cls_105b41d0 *param_1)

{
  if ((param_1 != (cls_105b41d0 *)0x0) ||
     (param_1 = (cls_105b41d0 *)heap_alloc((void *)0xc), param_1 != (cls_105b41d0 *)0x0)) {
    param_1->field_0x8 = (uint32_t)&DAT_105b41d0/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
  }
  return param_1;
}
