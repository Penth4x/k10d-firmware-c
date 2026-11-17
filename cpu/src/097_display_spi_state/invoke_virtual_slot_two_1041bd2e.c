/* @k10d invoke_virtual_slot_two_1041bd2e @ 0x1041bd2e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1041bd2e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  (**(code **)(iVar1 + 0x10c))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x108));
  return;
}
