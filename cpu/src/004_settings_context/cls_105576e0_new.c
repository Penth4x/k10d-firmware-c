/* @k10d cls_105576e0_new @ 0x10365906
 * name: verified (structural evidence: heap_alloc(0xe4) when NULL; stores vtable 0x105576e0; returns param_1)
 * unit: 004_settings_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105576e0 (vtable 0x105576e0, 0xe4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xe4) when NULL; stores vtable 0x105576e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105576e0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xe4), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_105576e0/*ROM*/;
    param_1[5] = 0;
    cls_10558b34_new(param_1 + 6);
    cls_10558990_new(param_1 + 0x10);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0x2e;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0xffffffff;
    param_1[0x1f] = 0xffffffff;
    *(uint8_t *)(param_1 + 0x20) = 0;
    *(uint8_t *)((int)param_1 + 0x81) = 0;
    alloc_and_zero_struct_104bb416(param_1 + 0x21);
    *(uint8_t *)(param_1 + 0x38) = 0;
  }
  return param_1;
}
