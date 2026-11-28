/* @k10d cls_105b5264_new @ 0x10496912
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b5264; returns param_1)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5264 (vtable 0x105b5264, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b5264; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b5264_new(cls_105b5264 *obj)

{
  /* If obj is already non-NULL, skip allocation; otherwise heap_alloc(4) in the
     delay-slot arg, then re-check for NULL.  On success, stamp the vtable. */
  if ((obj != (cls_105b5264 *)0x0) ||
     (obj = (cls_105b5264 *)heap_alloc((void *)4), obj != (cls_105b5264 *)0x0)) {
    obj->field_0x0 = (uint32_t)&DAT_105b5264/*ROM*/;
  }
  return;
}
