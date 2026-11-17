/* @k10d cls_105579a8_new @ 0x10367aba
 * name: verified (structural evidence: heap_alloc(0xac) when NULL; stores vtable 0x105579a8; returns param_1)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105579a8 (vtable 0x105579a8, 0xac bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xac) when NULL; stores vtable 0x105579a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105579a8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xac), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_105579a8/*ROM*/;
    param_1[5] = 0;
    cls_10558da4_new(param_1 + 6);
    alloc_and_zero_struct_104bb416(param_1 + 0x10);
    param_1[0x27] = 0;
    *(uint16_t *)(param_1 + 0x28) = 0;
    *(uint8_t *)((int)param_1 + 0xa2) = 0;
    *(uint8_t *)((int)param_1 + 0xa3) = 1;
    *(uint8_t *)(param_1 + 0x29) = 0;
    *(uint8_t *)((int)param_1 + 0xa5) = 0;
    *(uint8_t *)((int)param_1 + 0xa6) = 0;
    param_1[0x2a] = 0x2e;
  }
  return param_1;
}
