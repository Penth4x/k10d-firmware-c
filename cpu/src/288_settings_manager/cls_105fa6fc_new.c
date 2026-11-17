/* @k10d cls_105fa6fc_new @ 0x1052ca5c
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105fa6fc; returns param_1)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105fa6fc (vtable 0x105fa6fc, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105fa6fc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105fa6fc_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_105b7ee0_new(param_1);
    *param_1 = 0x105fa6fc/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = (uint32_t)heap_alloc_2(8);
    param_1[3] = uVar1;
    uVar1 = (uint32_t)alloc_and_zero_small_object((uint32_t *)0x0);
    param_1[4] = uVar1;
    param_1[5] = 0;
    (*(code *)0x104ad2d4/*ROM*/)(uVar1,param_1[3],6,0);
  }
  return param_1;
}
