/* @k10d cls_105a071c_new @ 0x1043cdc2
 * name: verified (structural evidence: heap_alloc(0x10c) when NULL; stores vtable 0x105a071c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a071c (vtable 0x105a071c, 0x10c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10c) when NULL; stores vtable 0x105a071c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a071c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10c), param_1 != (uint32_t *)0x0)) {
    cls_1059e330_new(param_1);
    param_1[1] = 0x105a071c/*ROM*/;
    param_1[2] = 0x105a074c/*ROM*/;
  }
  return param_1;
}
