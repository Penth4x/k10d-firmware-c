/* @k10d cls_105592e8_new @ 0x10385296
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x105592e8; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105592e8 (vtable 0x105592e8, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x105592e8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105592e8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x70), param_1 != (uint32_t *)0x0)) {
    cls_10559c4c_new(param_1);
    *param_1 = (uint32_t)&DAT_105592e8/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10559400/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10559428/*ROM*/;
    param_1[0xc] = 0;
    *(uint16_t *)(param_1 + 0x12) = 0;
    *(uint16_t *)((int)param_1 + 0x4a) = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(uint16_t *)(param_1 + 0xd) = 0;
    *(uint16_t *)(param_1 + 0xf) = 0;
    *(uint8_t *)(param_1 + 0x11) = 0;
    *(uint16_t *)((int)param_1 + 0x36) = 0;
    *(uint16_t *)((int)param_1 + 0x3e) = 0;
    *(uint8_t *)((int)param_1 + 0x45) = 0;
    *(uint16_t *)(param_1 + 0xe) = 0;
    *(uint16_t *)(param_1 + 0x10) = 0;
    *(uint8_t *)((int)param_1 + 0x46) = 0;
    *(uint16_t *)((int)param_1 + 0x3a) = 0;
    *(uint16_t *)((int)param_1 + 0x42) = 0;
    *(uint8_t *)((int)param_1 + 0x47) = 0;
  }
  return param_1;
}
