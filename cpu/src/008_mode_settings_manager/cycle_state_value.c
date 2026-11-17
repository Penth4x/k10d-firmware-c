/* @k10d cycle_state_value @ 0x10366d6a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool cycle_state_value(void *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0x18);
  iVar1 = iVar3 + -1;
  if (param_2 == 0) {
    switch(iVar1) {
    case 0:
      uVar2 = 2;
      break;
    case 1:
      uVar2 = 3;
      break;
    case 2:
      uVar2 = 4;
      break;
    case 3:
      uVar2 = 5;
      break;
    case 4:
      uVar2 = 6;
      break;
    case 5:
      uVar2 = 1;
      break;
    default:
      goto switchD_10366d84_default;
    }
  }
  else {
    switch(iVar1) {
    case 0:
      uVar2 = 6;
      break;
    case 1:
      uVar2 = 1;
      break;
    case 2:
      uVar2 = 2;
      break;
    case 3:
      uVar2 = 3;
      break;
    case 4:
      uVar2 = 4;
      break;
    case 5:
      uVar2 = 5;
      break;
    default:
      goto switchD_10366d84_default;
    }
  }
  *(uint32_t *)((int)param_1 + 0x18) = uVar2;
switchD_10366d84_default:
  return iVar3 != *(int *)((int)param_1 + 0x18);
}
