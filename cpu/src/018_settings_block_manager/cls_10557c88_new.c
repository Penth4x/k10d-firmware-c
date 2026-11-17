/* @k10d cls_10557c88_new @ 0x1036b304
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x10557c88; returns param_1)
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557c88 (vtable 0x10557c88, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x10557c88; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10557c88_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    *param_1 = (uint32_t)&DAT_10557c88/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(uint8_t *)(param_1 + 4) = 1;
  }
  return param_1;
}
