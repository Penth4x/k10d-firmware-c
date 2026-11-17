/* @k10d cls_1059fce4_new @ 0x1043784a
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059fce4; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059fce4 (vtable 0x1059fce4, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059fce4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059fce4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    cls_105ab830_new(param_1);
    *param_1 = (uint32_t)&DAT_1059fce4/*ROM*/;
  }
  return param_1;
}
