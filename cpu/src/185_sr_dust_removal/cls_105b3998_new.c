/* @k10d cls_105b3998_new @ 0x10489cd4
 * name: verified (structural evidence: heap_alloc(0x88) when NULL; stores vtable 0x105b3998; returns param_1)
 * unit: 185_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3998 (vtable 0x105b3998, 0x88 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x88) when NULL; stores vtable 0x105b3998; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3998_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x88), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    param_1[0x12] = 0x105b3998/*ROM*/;
    param_1[0x13] = 0;
    *(uint16_t *)(param_1 + 0x14) = 0;
    param_1[0x15] = 0;
    *(uint8_t *)(param_1 + 0x16) = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1e] = 0;
    param_1[0x1b] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x20] = 0;
    *(uint8_t *)(param_1 + 0x21) = 0;
    *(uint8_t *)((int)param_1 + 0x85) = 0;
  }
  return (int)param_1;
}
