/* @k10d dispatch_virtual_call_on_flag @ 0x104ea2d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_call_on_flag(int param_1,uint param_2)

{
  uint32_t uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((param_2 & 0xffff0000) == 0x1170000) {
    iVar3 = **(int **)(param_1 + 0x14);
    uVar1 = (**(code **)(iVar3 + 0x4c))
                      ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar3 + 0x48));
  }
  else {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      uVar1 = (**(code **)(*piVar2 + 0x14))((int)*(short *)(*piVar2 + 0x10) + (int)piVar2);
    }
  }
  return uVar1;
}
