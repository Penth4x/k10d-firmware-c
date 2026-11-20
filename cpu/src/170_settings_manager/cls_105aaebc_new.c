/* @k10d cls_105aaebc_new @ 0x1047e398
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105aaebc; returns param_1)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aaebc (vtable 0x105aaebc, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105aaebc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aaebc_new(cls_105aaebc *param_1)

{
  if ((param_1 != (cls_105aaebc *)0x0) ||
     (param_1 = (cls_105aaebc *)heap_alloc((void *)0x10), param_1 != (cls_105aaebc *)0x0)) {
    param_1->field_0xc = (uint32_t)&DAT_105aaebc/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
  }
  return;
}
