/* @k10d cls_105a0cd0_new @ 0x10441a78
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105a0cd0; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0cd0 (vtable 0x105a0cd0, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105a0cd0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0cd0_new(uint32_t *param_1,uint32_t *param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a0cd0/*ROM*/;
    param_1[2] = 0x105a0d00/*ROM*/;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    param_1[7] = param_2[3];
    param_1[8] = param_2[4];
    param_1[9] = param_2[5];
    param_1[10] = param_2[6];
    param_1[0xb] = param_2[7];
    param_1[0xc] = param_2[8];
    init_object_field_via_helper((int)param_1,param_2[10]);
    store_value_if_valid(param_1,param_2[9]);
  }
  return (int)param_1;
}
