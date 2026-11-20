/* @k10d cls_105b6554_new @ 0x104a3798
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x105b6554; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6554 (vtable 0x105b6554, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x105b6554; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b6554_new(cls_105b6554 *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_105b6554 *)0x0) ||
     (param_1 = (cls_105b6554 *)heap_alloc((void *)0x70), param_1 != (cls_105b6554 *)0x0)) {
    cls_105b6320_new((cls_105b6320 *)param_1);
    param_1->field_0x4 = 0x105b6554/*ROM*/;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
    param_1->field_0x30 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x40 = 0;
    param_1->field_0x44 = 0;
    param_1->field_0x48 = 0;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x54 = 0;
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    param_1->field_0x64 = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x6c = 0;
    uVar1 = get_or_init_heap_block();
    param_1->field_0x50 = uVar1;
  }
  return (int)param_1;
}
