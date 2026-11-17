/* @k10d map_segment_index_to_code @ 0x1046b7a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 149_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_segment_index_to_code(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 2:
  case 10:
    uVar1 = 3;
    break;
  default:
    uVar1 = 2;
    break;
  case 6:
    uVar1 = 5;
    break;
  case 0xc:
    uVar1 = 0xf;
    break;
  case 0xe:
    uVar1 = 4;
    break;
  case 0x12:
    uVar1 = 0xff;
    break;
  case 0x16:
    uVar1 = 0xd;
    break;
  case 0x18:
  case 0x1a:
    uVar1 = 0x10;
    break;
  case 0x1c:
    uVar1 = 9;
    break;
  case 0x1e:
    uVar1 = 8;
  }
  return uVar1;
}
