/* @k10d invoke_virtual_slot_on_nested_object_104f8b58 @ 0x104f8b58
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_nested_object_104f8b58(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  (**(code **)(iVar1 + 0x24))
            (*(int *)(param_1 + 0x10) + 4 + (int)*(short *)(iVar1 + 0x20),param_1 + 4);
  return;
}
