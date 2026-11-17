/* @k10d cls_105b2f68_new @ 0x10486f18
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x105b2f68; returns param_1)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2f68 (vtable 0x105b2f68, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x105b2f68; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b2f68_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x6c), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    cls_105a2c1c_new(param_1 + 0x13);
    param_1[0x12] = (uint32_t)&DAT_105b2f68/*ROM*/;
    param_1[0x17] = (uint32_t)&DAT_105b2f98/*ROM*/;
    cls_105a2af8_new(param_1 + 0x18);
    *(uint8_t *)(param_1 + 0x1a) = 0;
    wait_flg_obj(param_1 + 0x18,0);
    alloc_pool_and_init_task(param_1 + 0x13,0x10,0x1000,4);
  }
  return (int)param_1;
}
