/* @k10d cls_105643d0_new @ 0x1039fc0a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105643d0; returns param_1)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105643d0 (vtable 0x105643d0, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105643d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105643d0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_105b5224_new(param_1);
    *param_1 = 0x105643d0/*ROM*/;
    *(uint8_t *)(param_1 + 1) = 0;
    cls_105b4254_new(param_1 + 2);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 180000;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return param_1;
}
