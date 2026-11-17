/* @k10d cls_105d48e4_new @ 0x104fe10e
 * name: verified (structural evidence: heap_alloc(0x90) when NULL; stores vtable 0x105d48e4; returns param_1)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d48e4 (vtable 0x105d48e4, 0x90 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x90) when NULL; stores vtable 0x105d48e4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d48e4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x90), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new(param_1 + 1);
    *param_1 = 0x105d48e4/*ROM*/;
    param_1[1] = 0x105d4914/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    cls_1059e288_new(param_1 + 7);
    cls_1059e288_new(param_1 + 0xd);
    cls_1059e288_new(param_1 + 0x13);
    param_1[0x19] = 6;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(uint16_t *)(param_1 + 0x1c) = 0;
    *(uint16_t *)((int)param_1 + 0x72) = 0;
    *(uint16_t *)(param_1 + 0x1d) = 0;
    *(uint16_t *)((int)param_1 + 0x76) = 0;
    *(uint16_t *)(param_1 + 0x1e) = 0;
    *(uint16_t *)((int)param_1 + 0x7a) = 0;
    *(uint16_t *)(param_1 + 0x1f) = 0;
    *(uint16_t *)((int)param_1 + 0x7e) = 0;
    *(uint16_t *)(param_1 + 0x20) = 0;
    *(uint16_t *)((int)param_1 + 0x82) = 0x20;
    *(uint16_t *)(param_1 + 0x21) = 0x20;
    param_1[0x22] = 0xffffffff;
    param_1[0x23] = 0xffffffff;
  }
  return param_1;
}
