/* @k10d cls_105b4ad4_new @ 0x104947d2
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105b4ad4; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4ad4 (vtable 0x105b4ad4, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105b4ad4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b4ad4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    cls_105b48dc_new(param_1);
    param_1[3] = (uint32_t)&DAT_105b4ad4/*ROM*/;
    param_1[0x12] = 0;
  }
  return param_1;
}
