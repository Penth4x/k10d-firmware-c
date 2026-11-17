/* @k10d cls_105aacd8_new @ 0x1047d6ac
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105aacd8; returns param_1)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aacd8 (vtable 0x105aacd8, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105aacd8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aacd8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aacd8/*ROM*/;
  }
  return param_1;
}
