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

uint32_t * cls_105b7e2c_new(uint32_t *param_1,int param_2,uint8_t param_3)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    param_1[2] = 0x105b7e2c/*ROM*/;
    uVar1 = heap_alloc_2(param_2 + 3U & 0xfffffffc);
    *param_1 = uVar1;
    *(char *)(param_1 + 1) = (char)param_2;
    *(uint8_t *)((int)param_1 + 5) = param_3;
    set_byte_in_buffer_if_in_range(param_1,param_2,0);
    set_byte_in_buffer_if_in_range(param_1,*(uint8_t *)((int)param_1 + 5),1);
  }
  return param_1;
}
