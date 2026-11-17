/* @k10d invoke_two_virtual_methods_104a2d92 @ 0x104a2d92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_104a2d92(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x1c);
  (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x3c) + (int)*(short *)(iVar1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x1c) + 0xc))(*(short *)(*(int *)(iVar1 + 0x1c) + 8) + iVar1,3);
  }
  return;
}
