/* @k10d toggle_state_bit @ 0x10371cf2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_state_bit(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    switch(*(uint32_t *)((int)param_1 + 0x54)) {
    case 0:
      uVar1 = 7;
      break;
    default:
      goto switchD_10371d08_caseD_7;
    case 2:
      uVar1 = 1;
      break;
    case 3:
      uVar1 = 2;
      break;
    case 4:
      uVar1 = 3;
      break;
    case 5:
      uVar1 = 4;
      break;
    case 6:
      uVar1 = 5;
      break;
    case 7:
      uVar1 = 6;
    }
  }
  else {
    switch(*(uint32_t *)((int)param_1 + 0x54)) {
    case 0:
      uVar1 = 1;
      break;
    case 1:
      uVar1 = 2;
      break;
    case 2:
      uVar1 = 3;
      break;
    case 3:
      uVar1 = 4;
      break;
    case 4:
      uVar1 = 5;
      break;
    case 5:
      uVar1 = 6;
      break;
    case 6:
      uVar1 = 7;
      break;
    default:
switchD_10371d08_caseD_7:
      uVar1 = 0;
    }
  }
  *(uint32_t *)((int)param_1 + 0x54) = uVar1;
  return;
}
