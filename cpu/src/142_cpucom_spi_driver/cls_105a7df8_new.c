/* @k10d cls_105a7df8_new @ 0x10466a2a
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x105a7df8; returns param_1)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7df8 (vtable 0x105a7df8, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x105a7df8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a7df8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new(param_1 + 1);
    cls_105a2a8c_new(param_1 + 3);
    cls_1059e458_new(param_1 + 5);
    *param_1 = 0x105a7df8/*ROM*/;
    param_1[1] = 0x105a7e40/*ROM*/;
    param_1[4] = 0x105a7e68/*ROM*/;
    param_1[5] = 0x105a7e80/*ROM*/;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(uint8_t *)(param_1 + 10) = 0;
    *(uint8_t *)((int)param_1 + 0x29) = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  return param_1;
}
