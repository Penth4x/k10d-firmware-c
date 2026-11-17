/* @k10d cls_1059fe1c_new @ 0x10437bc8
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059fe1c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059fe1c (vtable 0x1059fe1c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059fe1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059fe1c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    cls_105ab830_new(param_1);
    *param_1 = (uint32_t)&DAT_1059fe1c/*ROM*/;
  }
  return param_1;
}
