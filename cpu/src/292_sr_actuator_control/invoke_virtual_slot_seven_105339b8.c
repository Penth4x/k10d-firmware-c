/* @k10d invoke_virtual_slot_seven_105339b8 @ 0x105339b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_seven_105339b8(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x3c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x38));
  return;
}
