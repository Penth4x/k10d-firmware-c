/* @k10d cls_105d5584_new @ 0x1050d244
 * name: verified (structural evidence: heap_alloc(0x84) when NULL; stores vtable 0x105d5584; returns param_1)
 * unit: 270_test_mode_screen (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d5584 (vtable 0x105d5584, 0x84 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x84) when NULL; stores vtable 0x105d5584; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d5584_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x84), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_1059e458_new(param_1 + 2);
    cls_105a2b50_new(param_1 + 3);
    *param_1 = (uintptr_t)(&DAT_105d5584/*ROM*/);
    param_1[1] = (uintptr_t)(&DAT_105d55cc/*ROM*/);
    param_1[2] = (uintptr_t)(&DAT_105d55e4/*ROM*/);
    param_1[7] = (uintptr_t)(&DAT_105d5604/*ROM*/);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    cls_105a2be0_new(param_1 + 0x18);
    cls_105a2af8_new(param_1 + 0x1a);
    *(uint8_t *)(param_1 + 0x20) = 0;
    *(uint8_t *)((int)param_1 + 0x81) = 0;
  }
  return param_1;
}
