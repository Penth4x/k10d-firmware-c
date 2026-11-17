/* @k10d invoke_virtual_slot_and_branch @ 0x10520532
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_branch(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  *(uint32_t *)(param_1 + 0xc) = param_3;
  iVar1 = **(int **)(param_1 + 8);
  iVar1 = (**(code **)(iVar1 + 0x34))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x30));
  if (iVar1 == 2) {
    invoke_event_handler_if_masked(param_1,2);
  }
  return;
}
