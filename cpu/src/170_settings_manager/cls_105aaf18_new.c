/* @k10d cls_105aaf18_new @ 0x1047e68c
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105aaf18; returns param_1)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aaf18 (vtable 0x105aaf18, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105aaf18; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105aaf18 * cls_105aaf18_new(cls_105aaf18 *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_105aaf18 *)0x0) ||
     (param_1 = (cls_105aaf18 *)heap_alloc((void *)0x34), param_1 != (cls_105aaf18 *)0x0)) {
    param_1->field_0x30 = 0x105aaf18/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x12 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x1d = 0;
    param_1->field_0x1e = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x22 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
    uVar1 = get_or_init_global_buffer();
    param_1->field_0x8 = uVar1;
  }
  return param_1;
}
