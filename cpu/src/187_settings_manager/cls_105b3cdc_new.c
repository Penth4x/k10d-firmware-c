/* @k10d cls_105b3cdc_new @ 0x1048c43a
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105b3cdc; returns param_1)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3cdc (vtable 0x105b3cdc, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105b3cdc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3cdc_new(cls_105b3cdc *param_1)

{
  if ((param_1 != (cls_105b3cdc *)0x0) ||
     (param_1 = (cls_105b3cdc *)heap_alloc((void *)0x24), param_1 != (cls_105b3cdc *)0x0)) {
    param_1->field_0x20 = (uint32_t)&DAT_105b3cdc/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x2 = 0;
    param_1->field_0x18 = 1;
    param_1->field_0x19 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x16 = 0;
  }
  return;
}
