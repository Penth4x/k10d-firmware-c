/* @k10d cls_105584bc_new @ 0x10373438
 * name: verified (structural evidence: heap_alloc(0x490) when NULL; stores vtable 0x105584bc; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105584bc (vtable 0x105584bc, 0x490 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x490) when NULL; stores vtable 0x105584bc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105584bc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x490), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_105584bc/*ROM*/;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    param_1[6] = 3000;
    *(uint8_t *)(param_1 + 7) = 0;
    *(uint8_t *)((int)param_1 + 0x1d) = 0;
    *(uint8_t *)((int)param_1 + 0x1e) = 0;
    *(uint8_t *)((int)param_1 + 0x1f) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(uint8_t *)(param_1 + 10) = 0;
    *(uint8_t *)((int)param_1 + 0x29) = 0;
    *(uint8_t *)((int)param_1 + 0x2a) = 0;
    *(uint16_t *)(param_1 + 0xb) = 0;
    *(uint16_t *)((int)param_1 + 0x2e) = 0;
    *(uint16_t *)(param_1 + 0xc) = 0;
    *(uint16_t *)((int)param_1 + 0x32) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    cls_105b9458_new(param_1 + 0xf);
    cls_105b9458_new(param_1 + 0x94);
    cls_1055a234_new(param_1 + 0x119);
  }
  return param_1;
}
