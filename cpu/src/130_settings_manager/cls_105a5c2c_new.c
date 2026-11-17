/* @k10d cls_105a5c2c_new @ 0x1045c936
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105a5c2c; returns param_1)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5c2c (vtable 0x105a5c2c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105a5c2c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a5c2c_new(uint32_t *param_1,uint32_t param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    param_1[5] = (uint32_t)&DAT_105a5c2c/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = param_2;
    *(uint8_t *)(param_1 + 4) = 0;
    init_object_with_optional_heap_field(param_1);
  }
  return param_1;
}
