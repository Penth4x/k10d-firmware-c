/* @k10d cls_105a04cc_new @ 0x1043bc1e
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105a04cc; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a04cc (vtable 0x105a04cc, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105a04cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a04cc_new(uint32_t *param_1,uint32_t *param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_105a0648_new(param_1);
    param_1[1] = 0x105a04cc/*ROM*/;
    param_1[2] = 0x105a054c/*ROM*/;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    param_1[7] = param_2[3];
    param_1[8] = param_2[5];
    param_1[9] = param_2[4];
    store_value_if_valid(param_1,param_2[6]);
    init_object_field_via_helper((int)param_1,param_2[7]);
  }
  return (int)param_1;
}
