/* @k10d cls_105b55fc_new @ 0x10498b68
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b55fc; returns param_1)
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b55fc (vtable 0x105b55fc, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b55fc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b55fc_new(cls_105b55fc *param_1)

{
  if ((param_1 != (cls_105b55fc *)0x0) ||
     (param_1 = (cls_105b55fc *)heap_alloc((void *)0x18), param_1 != (cls_105b55fc *)0x0)) {
    cls_105b9734_new((cls_105b9734 *)param_1);
    param_1->field_0x4 = 0x105b55fc/*ROM*/;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    cls_105d6dc8_new((cls_105d6dc8 *)&param_1->field_0x14);
  }
  return (int)param_1;
}
