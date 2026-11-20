/* @k10d cls_105a05a0_new @ 0x1043c224
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105a05a0; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a05a0 (vtable 0x105a05a0, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105a05a0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a05a0": ignoring multiple overlapping fields */

int cls_105a05a0_new(cls_105a05a0 *param_1,uint32_t *param_2)

{
  int iVar1;
  
  if ((param_1 != (cls_105a05a0 *)0x0) || (param_1 = (cls_105a05a0 *)heap_alloc((void *)0x28), param_1 != (cls_105a05a0 *)0x0)) {
    cls_105a0648_new((cls_105a0648 *)param_1);
    param_1->field_0x4 = 0x105a05a0/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = (uint32_t)((void *)0x105a0620/*ROM*/);
    ((uint32_t *)&(param_1->field_0x8))[2] = (uint32_t)((void *)*param_2);
    ((uint32_t *)&(param_1->field_0x8))[3] = (uint32_t)((void *)param_2[1]);
    param_1->field_0x18 = param_2[2];
    param_1->field_0x1c = param_2[3];
    param_1->field_0x20 = param_2[5];
    param_1->field_0x24 = param_2[4];
    store_value_if_valid(param_1,param_2[6]);
    iVar1 = *(int *)(param_2[8] + 8);
    (((vtbl_entry*)(iVar1))[3].fn)
              (param_2[8] + 8 + (int)((vtbl_entry*)(iVar1))[3].adj,&param_1->field_0x8,param_2[7]);
  }
  return (int)param_1;
}
