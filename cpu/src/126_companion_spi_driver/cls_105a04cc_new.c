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

/* WARNING: Struct "cls_105a04cc": ignoring multiple overlapping fields */

int cls_105a04cc_new(cls_105a04cc *param_1,uint32_t *param_2)

{
  if ((param_1 != (cls_105a04cc *)0x0) || (param_1 = (cls_105a04cc *)heap_alloc((void *)0x28), param_1 != (cls_105a04cc *)0x0)) {
    cls_105a0648_new((cls_105a0648 *)param_1);
    param_1->field_0x4 = 0x105a04cc/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = (uint32_t)((void *)0x105a054c/*ROM*/);
    ((uint32_t *)&(param_1->field_0x8))[2] = (uint32_t)((void *)*param_2);
    ((uint32_t *)&(param_1->field_0x8))[3] = (uint32_t)((void *)param_2[1]);
    param_1->field_0x18 = param_2[2];
    param_1->field_0x1c = param_2[3];
    param_1->field_0x20 = param_2[5];
    param_1->field_0x24 = param_2[4];
    store_value_if_valid(param_1,param_2[6]);
    init_object_field_via_helper((int)param_1,param_2[7]);
  }
  return (int)param_1;
}
