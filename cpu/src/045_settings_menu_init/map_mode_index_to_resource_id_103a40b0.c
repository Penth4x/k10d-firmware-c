/* @k10d map_mode_index_to_resource_id_103a40b0 @ 0x103a40b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_resource_id_103a40b0(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x201006e;
    }
    else if (param_3 == 1) {
      uVar1 = 0x201006f;
    }
    else if (param_3 == 2) {
      uVar1 = 0x2010070;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x2010071;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2010072;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x2010073;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2010074;
    }
    else {
      uVar1 = 0x2010073;
    }
    break;
  case 3:
    uVar1 = 0x2010075;
    break;
  case 4:
    uVar1 = 0x2010076;
    break;
  case 5:
    uVar1 = 0x2010077;
    break;
  case 6:
    uVar1 = 0x2010078;
    break;
  case 7:
    uVar1 = 0x2010079;
    break;
  case 8:
    uVar1 = 0x201007a;
    break;
  case 9:
    uVar1 = 0x201007b;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
