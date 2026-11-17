/* @k10d map_mode_index_to_id_103a3df8 @ 0x103a3df8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_id_103a3df8(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x2010036;
    }
    else if (param_3 == 1) {
      uVar1 = 0x2010037;
    }
    else if (param_3 == 2) {
      uVar1 = 0x2010038;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x2010039;
    }
    else if (param_3 == 3) {
      uVar1 = 0x201003a;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x201003b;
    }
    else if (param_3 == 3) {
      uVar1 = 0x201003c;
    }
    else {
      uVar1 = 0x201003b;
    }
    break;
  case 3:
    uVar1 = 0x201003d;
    break;
  case 4:
    uVar1 = 0x201003e;
    break;
  case 5:
    uVar1 = 0x201003f;
    break;
  case 6:
    uVar1 = 0x2010040;
    break;
  case 7:
    uVar1 = 0x2010041;
    break;
  case 8:
    uVar1 = 0x2010042;
    break;
  case 9:
    uVar1 = 0x2010043;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
