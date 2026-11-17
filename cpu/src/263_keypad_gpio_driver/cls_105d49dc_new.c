/* @k10d cls_105d49dc_new @ 0x104ff2f2
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105d49dc; returns param_1)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d49dc (vtable 0x105d49dc, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105d49dc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d49dc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new(param_1 + 2);
    *param_1 = 0x105d49dc/*ROM*/;
    param_1[1] = 0x105d4a14/*ROM*/;
    param_1[6] = 0x105d4a2c/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    *(uint8_t *)(param_1 + 0xb) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    cls_105a2af8_new(param_1 + 0xf);
  }
  return param_1;
}
