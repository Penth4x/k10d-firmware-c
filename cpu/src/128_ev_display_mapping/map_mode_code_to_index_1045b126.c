/* @k10d map_mode_code_to_index_1045b126 @ 0x1045b126
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_code_to_index_1045b126(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = 8;
    break;
  default:
    uVar1 = 8;
    break;
  case 3:
  case 4:
    uVar1 = 9;
    break;
  case 5:
    uVar1 = 0xb;
    break;
  case 8:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
    uVar1 = 0xc;
    break;
  case 0xf0:
    uVar1 = 0;
    break;
  case 0xf3:
    uVar1 = 1;
    break;
  case 0xf4:
  case 0xf5:
    uVar1 = 3;
    break;
  case 0xf8:
    uVar1 = 4;
    break;
  case 0xfb:
    uVar1 = 5;
    break;
  case 0xfc:
  case 0xfd:
    uVar1 = 7;
  }
  return uVar1;
}
