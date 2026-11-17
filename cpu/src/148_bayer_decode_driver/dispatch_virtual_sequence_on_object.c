/* @k10d dispatch_virtual_sequence_on_object @ 0x10469ec0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_sequence_on_object(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + 4);
  (**(code **)(iVar1 + 0x2c))(*(int *)((int)param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x28));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + 4);
  (**(code **)(iVar1 + 0x4c))
            (*(int *)((int)param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x48),param_2,0,0);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + 4);
  for (iVar1 = (**(code **)(iVar1 + 0x54))
                         (*(int *)((int)param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x50));
      iVar1 == 0;
      iVar1 = (**(code **)(iVar1 + 0x54))
                        (*(int *)((int)param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x50))) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + 4);
  }
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + 4);
  (**(code **)(iVar1 + 0x2c))(*(int *)((int)param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x28));
  return;
}
