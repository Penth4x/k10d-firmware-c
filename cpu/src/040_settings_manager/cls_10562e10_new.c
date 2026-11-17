/* @k10d cls_10562e10_new @ 0x10395b24
 * name: verified (structural evidence: heap_alloc(0xc8) when NULL; stores vtable 0x10562e10; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562e10 (vtable 0x10562e10, 0xc8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc8) when NULL; stores vtable 0x10562e10; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10562e10_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)200), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_10562e10/*ROM*/;
    param_1[1] = 0;
    cls_105639fc_new(param_1 + 2);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    alloc_and_zero_two_words_1045c3bc(param_1 + 0x2f);
    *(uint8_t *)(param_1 + 0x31) = 0;
  }
  return param_1;
}
