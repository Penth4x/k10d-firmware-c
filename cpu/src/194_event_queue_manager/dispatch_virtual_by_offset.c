/* @k10d dispatch_virtual_by_offset @ 0x10491ddc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_by_offset(int *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    (**(code **)(param_1[2] + 0x34))((int)*(short *)(param_1[2] + 0x30) + (int)param_1,iVar1);
    uVar2 = 1;
  }
  else if (iVar1 + 200 == param_2) {
    (**(code **)(param_1[2] + 0x3c))((int)*(short *)(param_1[2] + 0x38) + (int)param_1,iVar1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
