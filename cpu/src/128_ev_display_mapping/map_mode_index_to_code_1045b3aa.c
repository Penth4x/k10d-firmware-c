/* @k10d map_mode_index_to_code_1045b3aa @ 0x1045b3aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_code_1045b3aa(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 8;
    break;
  case 3:
    uVar1 = 9;
    break;
  case 4:
    uVar1 = 10;
    break;
  case 5:
    uVar1 = 2;
    break;
  case 6:
    uVar1 = 3;
    break;
  case 7:
    uVar1 = 10;
    break;
  case 8:
    if (param_3 == 0) {
      return 5;
    }
    if (param_3 == 1) {
      return 6;
    }
  default:
    uVar1 = 0;
  }
  return uVar1;
}
