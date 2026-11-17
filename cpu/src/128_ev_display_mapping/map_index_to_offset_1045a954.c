/* @k10d map_index_to_offset_1045a954 @ 0x1045a954
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_offset_1045a954(uint32_t param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    switch(param_3) {
    case 0:
      uVar1 = 0;
      break;
    default:
      uVar1 = 0;
      break;
    case 3:
      uVar1 = 3;
      break;
    case 4:
      uVar1 = 5;
      break;
    case 5:
      uVar1 = 7;
      break;
    case 8:
      uVar1 = 10;
      break;
    case 0xb:
      uVar1 = 0xd;
      break;
    case 0xc:
      uVar1 = 0xf;
      break;
    case 0xd:
      uVar1 = 0x11;
      break;
    case 0x10:
      uVar1 = 0x14;
    }
  }
  return uVar1;
}
