/* @k10d cls_105c2e90_new @ 0x104ef830
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105c2e90; returns param_1)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c2e90 (vtable 0x105c2e90, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105c2e90; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c2e90_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    *param_1 = 0x105c2e90/*ROM*/;
    param_1[1] = 0x105c2ec0/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    cls_105a2af8_new(param_1 + 10);
    param_1[0xc] = 0;
    zero_init_six_bytes((void *)(param_1 + 0xd));
    param_1[0xf] = 0;
    *(uint16_t *)(param_1 + 0x10) = 0;
    *(uint8_t *)((int)param_1 + 0x42) = 0;
    param_1[0x11] = 0;
    *(uint8_t *)(param_1 + 0x12) = 0;
  }
  return param_1;
}
