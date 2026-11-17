/* @k10d cls_10594e04_new @ 0x103b955e
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x10594e04; returns param_1)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10594e04 (vtable 0x10594e04, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x10594e04; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10594e04_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = (uint32_t)&DAT_10594e04/*ROM*/;
    param_1[1] = 0;
  }
  return param_1;
}
