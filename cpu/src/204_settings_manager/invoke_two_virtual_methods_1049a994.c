/* @k10d invoke_two_virtual_methods_1049a994 @ 0x1049a994
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_1049a994(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x10);
  (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x3c) + (int)*(short *)(iVar1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))(*(short *)(*(int *)(iVar1 + 0x10) + 8) + iVar1,3);
  }
  return;
}
