/* @k10d cls_1061e14c_new @ 0x10531614
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x1061e14c; returns param_1)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1061e14c (vtable 0x1061e14c, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x1061e14c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t *
cls_1061e14c_new(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    cls_105b81b0_new(param_1);
    *param_1 = 0x1061e14c;
    param_1[1] = 0;
    param_1[2] = param_2;
    param_1[3] = 0;
    param_1[4] = param_3;
    param_1[5] = param_4;
    uVar1 = alloc_and_zero_small_object((uint32_t *)0x0);
    param_1[6] = uVar1;
    param_1[7] = 0;
  }
  return param_1;
}
