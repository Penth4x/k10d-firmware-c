/* @k10d initialize_subobject_slot_104447c4 @ 0x104447c4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a sub-object stored at offset 4 of the parent object.
 * summary:
 *   Allocates 0x10 bytes from the heap and initializes them via cls_105a13c8_new. Stores
 *   the pointer at offset 4 of param_1. Calls store_value_if_valid with argument 0xa7 on
 *   the new object, then invokes virtual slot 2 of the sub-object with argument 0. Returns
 *   1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subobject_slot_104447c4(void *param_1)

{
  int iVar1;
  
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a13c8_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 4) = iVar1;
  store_value_if_valid((void *)iVar1,0xa7);
  iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x10),0);
  return 1;
}
