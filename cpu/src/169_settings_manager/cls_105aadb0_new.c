/* @k10d cls_105aadb0_new @ 0x1047dbea
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105aadb0; returns param_1)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aadb0 (vtable 0x105aadb0, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105aadb0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aadb0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = 0x105aadb0/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}
