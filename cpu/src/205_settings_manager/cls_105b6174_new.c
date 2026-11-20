/* @k10d cls_105b6174_new @ 0x104a18f4
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105b6174; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6174 (vtable 0x105b6174, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105b6174; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b6174_new(cls_105b6174 *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_105b6174 *)0x0) ||
     (param_1 = (cls_105b6174 *)heap_alloc((void *)0x30), param_1 != (cls_105b6174 *)0x0)) {
    cls_105b6320_new((cls_105b6320 *)param_1);
    param_1->field_0x4 = 0x105b6174/*ROM*/;
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
    uVar1 = get_or_init_heap_block();
    param_1->field_0x2c = uVar1;
  }
  return (int)param_1;
}
