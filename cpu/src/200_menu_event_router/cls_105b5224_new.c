/* @k10d cls_105b5224_new @ 0x104968d2
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b5224; returns param_1)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5224 (vtable 0x105b5224, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b5224; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b5224_new(cls_105b5224 *param_1)

{
  if ((param_1 != (cls_105b5224 *)0x0) ||
     (param_1 = (cls_105b5224 *)heap_alloc((void *)4), param_1 != (cls_105b5224 *)0x0)) {
    param_1->field_0x0 = (uint32_t)&DAT_105b5224/*ROM*/;
  }
  return;
}
