/* @k10d cls_1059e2a8_new @ 0x10427492
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1059e2a8; returns param_1)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e2a8 (vtable 0x1059e2a8, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1059e2a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059e2a8_new(cls_1059e2a8 *param_1)

{
  if ((param_1 != (cls_1059e2a8 *)0x0) ||
     (param_1 = (cls_1059e2a8 *)heap_alloc((void *)0x18), param_1 != (cls_1059e2a8 *)0x0)) {
    param_1->field_0x14 = 0x1059e2a8/*ROM*/;
    cls_105a2bf8_new((cls_105a2bf8 *)param_1);
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
  }
  return (int)param_1;
}
