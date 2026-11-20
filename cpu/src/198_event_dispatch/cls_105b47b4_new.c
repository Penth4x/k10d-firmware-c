/* @k10d cls_105b47b4_new @ 0x10493f72
 * name: verified (structural evidence: heap_alloc(0x68) when NULL; stores vtable 0x105b47b4; returns param_1)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b47b4 (vtable 0x105b47b4, 0x68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x68) when NULL; stores vtable 0x105b47b4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b47b4_new(cls_105b47b4 *param_1)

{
  if ((param_1 != (cls_105b47b4 *)0x0) ||
     (param_1 = (cls_105b47b4 *)heap_alloc((void *)0x68), param_1 != (cls_105b47b4 *)0x0)) {
    cls_105b44b4_new((cls_105b44b4 *)param_1);
    *(uint32_t *)&param_1->field_0xc = (uint32_t)&DAT_105b47b4/*ROM*/;
  }
  return (int)param_1;
}
