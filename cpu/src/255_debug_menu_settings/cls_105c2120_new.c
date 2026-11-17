/* @k10d cls_105c2120_new @ 0x104ea644
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105c2120; returns param_1)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c2120 (vtable 0x105c2120, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105c2120; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c2120_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105c2120/*ROM*/;
    param_1[2] = 0x105c2148/*ROM*/;
    param_1[4] = 0;
  }
  return param_1;
}
