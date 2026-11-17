/* @k10d cls_105b857c_new @ 0x104b51e0
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105b857c; returns param_1)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b857c (vtable 0x105b857c, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105b857c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b857c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = (uint32_t)&DAT_105b857c/*ROM*/;
    param_1[1] = 0;
  }
  return param_1;
}
