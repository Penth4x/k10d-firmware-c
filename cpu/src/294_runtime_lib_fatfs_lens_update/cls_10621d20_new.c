/* @k10d cls_10621d20_new @ 0x10536734
 * name: verified (structural evidence: heap_alloc(0x78) when NULL; stores vtable 0x10621d20; returns param_1)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10621d20 (vtable 0x10621d20, 0x78 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x78) when NULL; stores vtable 0x10621d20; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10621d20_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x78), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    cls_1059e478_new(param_1 + 0x13);
    param_1[0x12] = (uintptr_t)(&DAT_10621d20);
    param_1[0x13] = (uintptr_t)(&DAT_10621d50);
    *(uint8_t *)(param_1 + 0x14) = 0;
    param_1[0x15] = 0;
    *(uint8_t *)(param_1 + 0x1b) = 0;
    cls_105a2af8_new(param_1 + 0x1c);
    wait_flg_obj(param_1 + 0x1c,0);
    *(uint8_t *)(param_1 + 0x16) = 0;
    *(uint16_t *)(param_1 + 0x17) = 0;
    *(uint8_t *)((int)param_1 + 0x5e) = 0;
    *(uint8_t *)((int)param_1 + 0x5f) = 0;
    *(uint8_t *)(param_1 + 0x18) = 0;
    *(uint8_t *)((int)param_1 + 0x61) = 0;
    *(uint8_t *)((int)param_1 + 0x62) = 0;
    *(uint16_t *)((int)param_1 + 0x66) = 0;
    *(uint16_t *)((int)param_1 + 0x5a) = 0;
    *(uint8_t *)(param_1 + 0x1a) = 0;
    *(uint8_t *)((int)param_1 + 0x69) = 0;
    *(uint8_t *)((int)param_1 + 0x6a) = 0;
    *(uint8_t *)((int)param_1 + 0x6b) = 0;
  }
  return (int)param_1;
}
