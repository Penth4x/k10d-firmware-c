/* @k10d invoke_virtual_slot_and_conditional_callback_105204fe @ 0x105204fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_conditional_callback_105204fe(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  iVar1 = (**(code **)(iVar1 + 0x4c))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x48));
  if ((iVar1 == 2) && (*(int *)(param_1 + 0xc) != 0)) {
    dispatch_event_if_enabled(param_1,2);
  }
  return;
}
