/* @k10d cls_105b7e2c_new @ 0x104b08b4
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b7e2c; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7e2c (vtable 0x105b7e2c, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b7e2c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7e2c * cls_105b7e2c_new(cls_105b7e2c *param_1,int param_2,uint8_t param_3)

{
  uint8_t *puVar1;
  
  if ((param_1 != (cls_105b7e2c *)0x0) ||
     (param_1 = (cls_105b7e2c *)heap_alloc((void *)0xc), param_1 != (cls_105b7e2c *)0x0)) {
    param_1->field_0x8 = 0x105b7e2c/*ROM*/;
    puVar1 = (uint8_t *)heap_alloc_2(param_2 + 3U & 0xfffffffc);
    param_1->field_0x0 = (uint32_t)puVar1;
    param_1->field_0x4 = (byte)param_2;
    param_1->field_0x5 = param_3;
    set_byte_in_buffer_if_in_range((void *)param_1,param_2,0);
    set_byte_in_buffer_if_in_range((void *)param_1,param_1->field_0x5,1);
  }
  return param_1;
}
