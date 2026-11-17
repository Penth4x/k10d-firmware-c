/* @k10d advance_state_on_virtual_ok @ 0x10486880
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t advance_state_on_virtual_ok(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,0x14);
  uVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_2 + 0x14))((int)*(short *)(*param_2 + 0x10) + (int)param_2,0x14);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 < 4) {
        iVar1 = iVar1 + 1;
      }
      else if (iVar1 < 5) {
        iVar1 = iVar1 + 1;
      }
      else {
        iVar1 = 4;
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = 0;
    uVar2 = 1;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  return uVar2;
}
