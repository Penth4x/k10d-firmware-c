/* @k10d cls_105b56ec_new @ 0x1049a36a
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105b56ec; returns param_1)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b56ec (vtable 0x105b56ec, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105b56ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b56ec * cls_105b56ec_new(cls_105b56ec *param_1)

{
  if ((param_1 != (cls_105b56ec *)0x0) ||
     (param_1 = (cls_105b56ec *)heap_alloc((void *)0x14), param_1 != (cls_105b56ec *)0x0)) {
    param_1->field_0x10 = 0x105b56ec/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
  }
  return param_1;
}
