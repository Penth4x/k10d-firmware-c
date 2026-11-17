/* @k10d map_mode_index_to_code_1045b524 @ 0x1045b524
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_code_1045b524(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 0;
    break;
  case 4:
    uVar1 = 3;
    break;
  case 5:
  case 10:
    uVar1 = 4;
    break;
  case 8:
  case 0xb:
    uVar1 = 6;
    break;
  case 9:
  case 0xc:
    uVar1 = 7;
    break;
  case 0xd:
  case 0xe:
    uVar1 = 5;
    break;
  case 0xf:
    uVar1 = 2;
    break;
  case 0x10:
  case 0x11:
    uVar1 = 8;
    break;
  default:
    uVar1 = 0xff;
  }
  return uVar1;
}
