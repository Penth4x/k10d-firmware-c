/* @k10d map_mode_code_to_index_1045b3e8 @ 0x1045b3e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_code_to_index_1045b3e8(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  switch(param_2) {
  default:
switchD_1045b3f6_caseD_0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 5;
    break;
  case 3:
    uVar1 = 6;
    break;
  case 5:
    uVar1 = 8;
    break;
  case 6:
    uVar1 = 8;
    break;
  case 8:
    uVar1 = 2;
    break;
  case 9:
    uVar1 = 3;
    break;
  case 10:
    switch(param_3) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 7:
    case 10:
    case 0xf:
      uVar1 = 4;
      break;
    default:
      goto switchD_1045b3f6_caseD_0;
    case 4:
    case 6:
    case 8:
    case 9:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      uVar1 = 7;
    }
  }
  return uVar1;
}
