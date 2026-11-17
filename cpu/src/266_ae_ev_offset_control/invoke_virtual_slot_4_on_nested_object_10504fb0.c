/* @k10d invoke_virtual_slot_4_on_nested_object_10504fb0 @ 0x10504fb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_on_nested_object_10504fb0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  (**(code **)(iVar1 + 0x24))
            (*(int *)(param_1 + 0x1c) + 4 + (int)*(short *)(iVar1 + 0x20),param_1 + 4);
  return;
}
