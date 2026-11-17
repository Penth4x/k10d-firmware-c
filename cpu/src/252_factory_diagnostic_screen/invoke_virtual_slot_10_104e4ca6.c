/* @k10d invoke_virtual_slot_10_104e4ca6 @ 0x104e4ca6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_10_104e4ca6(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x54))
                      (*(short *)(*(int *)(iVar1 + 0x18) + 0x50) + iVar1);
  }
  return uVar2;
}
