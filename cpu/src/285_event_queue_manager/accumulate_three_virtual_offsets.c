/* @k10d accumulate_three_virtual_offsets @ 0x1052983c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void accumulate_three_virtual_offsets(uint32_t param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_3 + 0x208) + 0x44))
                    (*(short *)(*(int *)(param_3 + 0x208) + 0x40) + param_3);
  *param_2 = *param_2 + iVar1;
  iVar1 = (**(code **)(*(int *)(param_3 + 0x208) + 0x4c))
                    (*(short *)(*(int *)(param_3 + 0x208) + 0x48) + param_3);
  param_2[1] = param_2[1] + iVar1;
  iVar1 = (**(code **)(*(int *)(param_3 + 0x208) + 0x54))
                    (*(short *)(*(int *)(param_3 + 0x208) + 0x50) + param_3);
  param_2[2] = param_2[2] + iVar1;
  return;
}
