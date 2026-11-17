/* @k10d init_object_with_heap_subobject @ 0x1044c122
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_subobject(int param_1)

{
  int iVar1;
  
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a1bec_new((void *)iVar1);
  }
  *(int *)(param_1 + 4) = iVar1;
  store_value_if_valid((void *)iVar1,0x88);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 4) + (int)*(short *)(iVar1 + 0x10),0);
  return;
}
