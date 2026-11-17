/* @k10d map_mode_index_to_id_103aa1be @ 0x103aa1be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_id_103aa1be(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x200002c;
    }
    else if (param_3 == 1) {
      uVar1 = 0x200002d;
    }
    else if (param_3 == 2) {
      uVar1 = 0x200002e;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x200002f;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2000030;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x2000031;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2000032;
    }
    else {
      uVar1 = 0x2000031;
    }
    break;
  case 3:
    uVar1 = 0x2000033;
    break;
  case 4:
    uVar1 = 0x2000034;
    break;
  case 5:
    uVar1 = 0x2000035;
    break;
  case 6:
    uVar1 = 0x2000036;
    break;
  case 7:
    uVar1 = 0x2000037;
    break;
  case 8:
    uVar1 = 0x2000038;
    break;
  case 9:
    uVar1 = 0x2000039;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
