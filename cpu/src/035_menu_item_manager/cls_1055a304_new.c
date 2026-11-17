/* @k10d cls_1055a304_new @ 0x103903dc
 * name: verified (structural evidence: heap_alloc(0x84) when NULL; stores vtable 0x1055a304; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1055a304 (vtable 0x1055a304, 0x84 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x84) when NULL; stores vtable 0x1055a304; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1055a304_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x84), param_1 != (uint32_t *)0x0)) {
    cls_1059e128_new(param_1);
    cls_1059e478_new(param_1 + 0x10);
    cls_105a2a8c_new(param_1 + 0x11);
    *param_1 = 0x1055a304/*ROM*/;
    param_1[1] = 0x1055a3cc/*ROM*/;
    param_1[6] = 0x1055a3ec/*ROM*/;
    param_1[0xb] = 0x1055a41c/*ROM*/;
    param_1[0xc] = 0x1055a434/*ROM*/;
    param_1[0xd] = 0x1055a454/*ROM*/;
    param_1[0x10] = 0x1055a494/*ROM*/;
    param_1[0x12] = 0x1055a4ac/*ROM*/;
    cls_105a2af8_new(param_1 + 0x13);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(uint8_t *)(param_1 + 0x17) = 1;
    *(uint8_t *)((int)param_1 + 0x5d) = 0;
    *(uint8_t *)((int)param_1 + 0x5e) = 0;
    *(uint8_t *)((int)param_1 + 0x5f) = 1;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    cls_1055a4c4_new(param_1 + 0x1a);
    *(uint8_t *)(param_1 + 0x20) = 0;
  }
  return param_1;
}
