/* @k10d cls_10564150_new @ 0x1039d640
 * name: verified (structural evidence: heap_alloc(0xdc) when NULL; stores vtable 0x10564150; returns param_1)
 * unit: 041_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10564150 (vtable 0x10564150, 0xdc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xdc) when NULL; stores vtable 0x10564150; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10564150_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xdc), param_1 != (uint32_t *)0x0)) {
    cls_1059e100_new(param_1);
    cls_105a2c1c_new(param_1 + 1);
    cls_1059e490_new(param_1 + 6);
    cls_1059e478_new(param_1 + 7);
    cls_105a2a8c_new(param_1 + 8);
    cls_1059e458_new(param_1 + 10);
    *param_1 = 0x10564150/*ROM*/;
    param_1[5] = 0x105641c0/*ROM*/;
    param_1[6] = 0x105641d8/*ROM*/;
    param_1[7] = 0x105641f8/*ROM*/;
    param_1[9] = 0x10564210/*ROM*/;
    param_1[10] = 0x10564228/*ROM*/;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + 0x35) = 0;
    *(uint8_t *)((int)param_1 + 0x36) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(uint8_t *)(param_1 + 0x10) = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 1;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    *(uint16_t *)(param_1 + 0x2c) = 0;
    *(uint16_t *)((int)param_1 + 0xb2) = 0;
    *(uint16_t *)(param_1 + 0x2d) = 0;
    *(uint16_t *)((int)param_1 + 0xb6) = 0;
    *(uint16_t *)(param_1 + 0x2e) = 0;
    param_1[0x2f] = 0;
    *(uint8_t *)(param_1 + 0x30) = 0;
    *(uint8_t *)((int)param_1 + 0xc1) = 0;
    *(uint8_t *)((int)param_1 + 0xc2) = 0;
    *(uint8_t *)((int)param_1 + 0xc3) = 0;
    *(uint8_t *)(param_1 + 0x31) = 0;
    *(uint8_t *)((int)param_1 + 0xc5) = 0;
    param_1[0x32] = 0;
    cls_105a2af8_new(param_1 + 0x33);
    *(uint8_t *)(param_1 + 0x35) = 0;
    *(uint8_t *)((int)param_1 + 0xd5) = 0;
    *(uint8_t *)((int)param_1 + 0xd6) = 0;
    *(uint8_t *)((int)param_1 + 0xd7) = 0;
    *(uint8_t *)(param_1 + 0x36) = 0;
    *(uint8_t *)((int)param_1 + 0xd9) = 0;
    *(uint8_t *)((int)param_1 + 0xda) = 0;
  }
  return param_1;
}
