/* @k10d cls_10566478_new @ 0x103b2f42
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x10566478; returns param_1)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10566478 (vtable 0x10566478, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x10566478; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10566478_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x6c), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    *param_1 = 0x10566478/*ROM*/;
    param_1[0x10] = 0;
    *(uint8_t *)(param_1 + 0x11) = 0;
    *(uint8_t *)((int)param_1 + 0x45) = 0;
    *(uint16_t *)((int)param_1 + 0x46) = 0;
    *(uint16_t *)(param_1 + 0x12) = 0;
    *(uint16_t *)((int)param_1 + 0x4a) = 0;
    *(uint8_t *)((int)param_1 + 0x66) = 0;
    *(uint8_t *)((int)param_1 + 0x67) = 0;
    param_1[0x1a] = 0;
    *(uint16_t *)(param_1 + 0x19) = 0x24;
    *(uint16_t *)((int)param_1 + 0x62) = 0x22;
    *(uint16_t *)(param_1 + 0x18) = 0x21;
    *(uint16_t *)((int)param_1 + 0x5e) = 0x20;
    *(uint16_t *)(param_1 + 0x17) = 0x1e;
    *(uint16_t *)((int)param_1 + 0x5a) = 0x1c;
    *(uint16_t *)(param_1 + 0x16) = 0x1b;
    *(uint16_t *)((int)param_1 + 0x56) = 0x1a;
    *(uint16_t *)(param_1 + 0x15) = 0x18;
    *(uint16_t *)((int)param_1 + 0x52) = 0x16;
    *(uint16_t *)(param_1 + 0x14) = 0x15;
    *(uint16_t *)((int)param_1 + 0x4e) = 0x14;
    *(uint16_t *)(param_1 + 0x13) = 0x12;
  }
  return param_1;
}
