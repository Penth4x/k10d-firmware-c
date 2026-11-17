/* @k10d cls_105a776c_new @ 0x10463b78
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105a776c; returns param_1)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a776c (vtable 0x105a776c, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105a776c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10463b92) overlaps instruction at (ram,0x10463b90)
    */

uint32_t * cls_105a776c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    allocate_cpucom_transaction_context(param_1,0,2);
    *param_1 = 0x105a776c/*ROM*/;
    param_1[1] = 0x105a77fc/*ROM*/;
    *(uint8_t *)(param_1 + 0x12) = 0;
    *(uint8_t *)((int)param_1 + 0x49) = 0;
  }
  return param_1;
}
