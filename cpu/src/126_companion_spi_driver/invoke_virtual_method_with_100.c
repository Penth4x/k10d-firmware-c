/* @k10d invoke_virtual_method_with_100 @ 0x10447efe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_with_100(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10c) + 4);
  (**(code **)(iVar1 + 0x34))(*(int *)(param_1 + 0x10c) + (int)*(short *)(iVar1 + 0x30),100);
  return;
}
