/* @k10d invoke_virtual_slot_3_three_times @ 0x1041aeba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_three_times(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  iVar1 = param_1 + 8;
  (**(code **)(iVar2 + 0x24))(*(int *)(param_1 + 0x24) + 4 + (int)*(short *)(iVar2 + 0x20),iVar1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  (**(code **)(iVar2 + 0x24))(*(int *)(param_1 + 0x24) + 4 + (int)*(short *)(iVar2 + 0x20),iVar1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  (**(code **)(iVar2 + 0x24))(*(int *)(param_1 + 0x24) + 4 + (int)*(short *)(iVar2 + 0x20),iVar1);
  return;
}
