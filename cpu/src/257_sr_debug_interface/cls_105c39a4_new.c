/* @k10d cls_105c39a4_new @ 0x104f35d2
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105c39a4; returns param_1)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c39a4 (vtable 0x105c39a4, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105c39a4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c39a4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new(param_1 + 2);
    *param_1 = 0x105c39a4/*ROM*/;
    param_1[1] = 0x105c39dc/*ROM*/;
    param_1[6] = 0x105c39f4/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    cls_105a2af8_new(param_1 + 0xe);
  }
  return param_1;
}
