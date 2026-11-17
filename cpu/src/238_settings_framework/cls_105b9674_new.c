/* @k10d cls_105b9674_new @ 0x104ce6c4
 * name: verified (structural evidence: heap_alloc(0x68) when NULL; stores vtable 0x105b9674; returns param_1)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9674 (vtable 0x105b9674, 0x68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x68) when NULL; stores vtable 0x105b9674; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b9674_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x68), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new(param_1 + 2);
    *param_1 = 0x105b9674/*ROM*/;
    param_1[1] = 0x105b96ac/*ROM*/;
    param_1[6] = 0x105b96c4/*ROM*/;
    cls_105a2af8_new(param_1 + 9);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    alloc_and_zero_20_bytes(param_1 + 0xe);
    param_1[0x13] = 0;
    param_1[0x19] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  return param_1;
}
