/* @k10d cls_10565770_new @ 0x103aa490
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x10565770; returns param_1)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10565770 (vtable 0x10565770, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x10565770; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10565770_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x50), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    cls_105a2a8c_new(param_1 + 0x10);
    *param_1 = 0x10565770/*ROM*/;
    param_1[0x11] = 0x10565810/*ROM*/;
    *(uint8_t *)(param_1 + 0x12) = 0;
    *(uint8_t *)((int)param_1 + 0x49) = 0;
    *(uint8_t *)((int)param_1 + 0x4a) = 0;
    *(uint8_t *)((int)param_1 + 0x4b) = 0;
    *(uint8_t *)(param_1 + 0x13) = 0;
    *(uint8_t *)((int)param_1 + 0x4d) = 0;
    *(uint8_t *)((int)param_1 + 0x4e) = 0;
  }
  return param_1;
}
