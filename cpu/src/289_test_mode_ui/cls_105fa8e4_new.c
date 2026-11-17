/* @k10d cls_105fa8e4_new @ 0x1052e91c
 * name: verified (structural evidence: heap_alloc(0x5c) when NULL; stores vtable 0x105fa8e4; returns param_1)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105fa8e4 (vtable 0x105fa8e4, 0x5c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x5c) when NULL; stores vtable 0x105fa8e4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105fa8e4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x5c), param_1 != (uint32_t *)0x0)) {
    param_1[0x16] = (uint32_t)&DAT_105fa8e4/*ROM*/;
    *param_1 = 0x2000;
    param_1[1] = 0x2000;
    param_1[2] = 0x2000;
    param_1[3] = 0x2000;
    *(uint16_t *)(param_1 + 4) = 0x2000;
    *(uint16_t *)((int)param_1 + 0x12) = 0x2000;
    *(uint16_t *)(param_1 + 5) = 0x2000;
    *(uint16_t *)((int)param_1 + 0x16) = 0x2000;
    param_1[6] = 0x2000;
    param_1[7] = 0x2000;
    param_1[8] = 0x2000;
    param_1[9] = 0x2000;
    *(uint16_t *)(param_1 + 10) = 0x2000;
    *(uint16_t *)((int)param_1 + 0x2a) = 0x2000;
    *(uint16_t *)(param_1 + 0xb) = 0x2000;
    *(uint16_t *)((int)param_1 + 0x2e) = 0x2000;
    param_1[0xc] = 0x2000;
    param_1[0xd] = 0x2000;
    param_1[0xe] = 0x2000;
    param_1[0xf] = 0x2000;
    param_1[0x10] = 0x2000;
    *(uint16_t *)(param_1 + 0x11) = 0x2000;
    *(uint16_t *)((int)param_1 + 0x46) = 0x2000;
    *(uint16_t *)(param_1 + 0x12) = 0x2000;
    *(uint16_t *)((int)param_1 + 0x4a) = 0x2000;
    *(uint16_t *)(param_1 + 0x13) = 0x2000;
    *(uint16_t *)((int)param_1 + 0x4e) = 0x2000;
    *(uint16_t *)(param_1 + 0x14) = 0x2000;
    *(uint16_t *)((int)param_1 + 0x52) = 0x2000;
    *(uint16_t *)(param_1 + 0x15) = 0x2000;
  }
  return;
}
