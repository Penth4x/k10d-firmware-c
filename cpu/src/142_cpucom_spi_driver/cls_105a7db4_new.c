/* @k10d cls_105a7db4_new @ 0x10466990
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a7db4; returns param_1)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7db4 (vtable 0x105a7db4, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a7db4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a7db4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = (uint32_t)&DAT_105a7db4/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    cls_105a2be0_new(param_1 + 5);
  }
  return param_1;
}
