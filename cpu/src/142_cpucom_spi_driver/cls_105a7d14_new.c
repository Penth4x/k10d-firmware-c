/* @k10d cls_105a7d14_new @ 0x104655d4
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105a7d14; returns param_1)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7d14 (vtable 0x105a7d14, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105a7d14; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a7d14_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new(param_1 + 1);
    *param_1 = 0x105a7d14/*ROM*/;
    param_1[1] = 0x105a7d44/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return param_1;
}
