/* @k10d map_index_to_code_1045b55e @ 0x1045b55e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_code_1045b55e(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = 3;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 0xf;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 0xd;
    break;
  case 6:
    uVar1 = 8;
    break;
  case 7:
    uVar1 = 9;
    break;
  case 8:
    uVar1 = 0x10;
    break;
  default:
    uVar1 = 0xff;
  }
  return uVar1;
}
