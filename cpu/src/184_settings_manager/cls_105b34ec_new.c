/* @k10d cls_105b34ec_new @ 0x10488912
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x105b34ec; returns param_1)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b34ec (vtable 0x105b34ec, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x105b34ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b34ec_new(cls_105b34ec *param_1)

{
  if ((param_1 != (cls_105b34ec *)0x0) ||
     (param_1 = (cls_105b34ec *)heap_alloc((void *)0x50), param_1 != (cls_105b34ec *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    param_1->field_0x48 = (uint32_t)&DAT_105b34ec/*ROM*/;
    param_1->field_0x4c = 0;
    param_1->field_0x4d = 0;
    param_1->field_0x4e = 0;
    param_1->field_0x4f = 0;
    param_1->field_0x44 = 2;
  }
  return (int)param_1;
}
