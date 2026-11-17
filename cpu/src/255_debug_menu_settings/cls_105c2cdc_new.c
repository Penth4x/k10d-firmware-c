/* @k10d cls_105c2cdc_new @ 0x104ed78e
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105c2cdc; returns param_1)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c2cdc (vtable 0x105c2cdc, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105c2cdc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c2cdc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_105c2a40_new(param_1 + 1);
    *param_1 = 0x105c2cdc/*ROM*/;
    param_1[1] = 0x105c2d0c/*ROM*/;
    param_1[2] = 0;
  }
  return param_1;
}
