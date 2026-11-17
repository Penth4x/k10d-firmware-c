/* @k10d cls_105a0c1c_new @ 0x10441686
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a0c1c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0c1c (vtable 0x105a0c1c, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a0c1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0c1c_new(uint32_t *param_1,uint32_t *param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a0c1c/*ROM*/;
    param_1[2] = 0x105a0c4c/*ROM*/;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[3];
    store_value_if_valid(param_1,param_2[2]);
    init_object_field_via_helper((int)param_1,param_1[6]);
  }
  return (int)param_1;
}
