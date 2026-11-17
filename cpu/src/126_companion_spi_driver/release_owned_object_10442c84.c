/* @k10d release_owned_object_10442c84 @ 0x10442c84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_10442c84(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 4) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4),
     (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x20)),
     *(int *)((int)param_1 + 4) != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 4) = 0;
  return;
}
