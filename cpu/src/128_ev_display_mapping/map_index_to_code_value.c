/* @k10d map_index_to_code_value @ 0x1045b062
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_code_value(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = 0xf0;
    break;
  case 1:
    uVar1 = 0xf3;
    break;
  case 2:
    uVar1 = 0xf4;
    break;
  case 3:
    uVar1 = 0xf5;
    break;
  case 4:
    uVar1 = 0xf8;
    break;
  case 5:
    uVar1 = 0xfb;
    break;
  case 6:
    uVar1 = 0xfc;
    break;
  case 7:
    uVar1 = 0xfd;
    break;
  case 8:
    uVar1 = 0;
    break;
  case 9:
    uVar1 = 3;
    break;
  case 10:
    uVar1 = 4;
    break;
  case 0xb:
    uVar1 = 5;
    break;
  case 0xc:
    uVar1 = 8;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
