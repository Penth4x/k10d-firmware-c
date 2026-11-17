/* @k10d cls_10621c8c_new @ 0x105363cc
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x10621c8c; returns param_1)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10621c8c (vtable 0x10621c8c, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x10621c8c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10621c8c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x50), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    param_1[0x12] = (uint32_t)&DAT_10621c8c;
    *(uint8_t *)(param_1 + 0x13) = 0;
    *(uint8_t *)((int)param_1 + 0x4d) = 0;
  }
  return (int)param_1;
}
