/* @k10d cls_1059efac_new @ 0x1042f480
 * name: verified (structural evidence: heap_alloc(0xd0) when NULL; stores vtable 0x1059efac; returns param_1)
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059efac (vtable 0x1059efac, 0xd0 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xd0) when NULL; stores vtable 0x1059efac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059efac_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xd0), param_1 != (uint32_t *)0x0)) {
    cls_1059e100_new(param_1);
    cls_105a2b50_new(param_1 + 1);
    *param_1 = 0x1059efac/*ROM*/;
    param_1[5] = 0x1059efdc/*ROM*/;
    cls_105a2bf8_new(param_1 + 8);
    cls_105a2bf8_new(param_1 + 10);
    param_1[0x15] = 0x1059ef9c/*ROM*/;
    param_1[0x11] = 5;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(uint8_t *)(param_1 + 0x14) = 0;
    param_1[0x1a] = 0x1059ef9c/*ROM*/;
    param_1[0x16] = 5;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(uint8_t *)(param_1 + 0x19) = 0;
    param_1[0x1f] = 0x1059ef9c/*ROM*/;
    param_1[0x1b] = 5;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(uint8_t *)(param_1 + 0x1e) = 0;
    param_1[0x28] = 0x1059ef9c/*ROM*/;
    param_1[0x24] = 4;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    *(uint8_t *)(param_1 + 0x27) = 0;
    param_1[0x2d] = 0x1059ef9c/*ROM*/;
    param_1[0x29] = 4;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    *(uint8_t *)(param_1 + 0x2c) = 0;
    param_1[0x32] = 0x1059ef9c/*ROM*/;
    param_1[0x2e] = 4;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    *(uint8_t *)(param_1 + 0x31) = 0;
    param_1[0x33] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  return param_1;
}
