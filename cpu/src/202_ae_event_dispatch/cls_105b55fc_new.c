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

int cls_105b55fc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_105b9734_new(param_1);
    param_1[1] = 0x105b55fc/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    cls_105d6dc8_new(param_1 + 5);
  }
  return (int)param_1;
}
