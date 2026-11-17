/* @k10d invoke_virtual_slot_10_with_one @ 0x1046618c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_10_with_one(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  (**(code **)(iVar1 + 0x6c))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x68),1);
  return;
}
