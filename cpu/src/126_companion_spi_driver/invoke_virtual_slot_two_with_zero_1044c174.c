/* @k10d invoke_virtual_slot_two_with_zero_1044c174 @ 0x1044c174
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_with_zero_1044c174(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  return 1;
}
