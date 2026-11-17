/* @k10d cls_105c1610_new @ 0x104e7ec6
 * name: verified (structural evidence: heap_alloc(0x190) when NULL; stores vtable 0x105c1610; returns param_1)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c1610 (vtable 0x105c1610, 0x190 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x190) when NULL; stores vtable 0x105c1610; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c1610_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)400), param_1 != (uint32_t *)0x0)) {
    cls_1059e100_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_1059e458_new(param_1 + 2);
    cls_1059e4b0_new(param_1 + 3);
    cls_105a2b50_new(param_1 + 4);
    *param_1 = 0x105c1610/*ROM*/;
    param_1[1] = 0x105c1668/*ROM*/;
    param_1[2] = 0x105c1680/*ROM*/;
    param_1[3] = 0x105c16a0/*ROM*/;
    param_1[8] = 0x105c16c0/*ROM*/;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    init_0x142_byte_buffer(param_1 + 0xf);
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    cls_105a2af8_new(param_1 + 0x62);
  }
  return param_1;
}
