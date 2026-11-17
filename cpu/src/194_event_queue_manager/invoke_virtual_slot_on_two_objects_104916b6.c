/* @k10d invoke_virtual_slot_on_two_objects_104916b6 @ 0x104916b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_two_objects_104916b6(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x18);
  (**(code **)(iVar1 + 0x14))(*param_1 + (int)*(short *)(iVar1 + 0x10));
  iVar1 = *(int *)(param_1[1] + 0x18);
  (**(code **)(iVar1 + 0x14))(param_1[1] + (int)*(short *)(iVar1 + 0x10));
  return;
}
