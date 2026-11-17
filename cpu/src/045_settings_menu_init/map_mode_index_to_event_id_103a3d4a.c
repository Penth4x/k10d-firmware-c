/* @k10d map_mode_index_to_event_id_103a3d4a @ 0x103a3d4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_event_id_103a3d4a(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x2010028;
    }
    else if (param_3 == 1) {
      uVar1 = 0x2010029;
    }
    else if (param_3 == 2) {
      uVar1 = 0x201002a;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x201002b;
    }
    else if (param_3 == 3) {
      uVar1 = 0x201002c;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x201002d;
    }
    else if (param_3 == 3) {
      uVar1 = 0x201002e;
    }
    else {
      uVar1 = 0x201002d;
    }
    break;
  case 3:
    uVar1 = 0x201002f;
    break;
  case 4:
    uVar1 = 0x2010030;
    break;
  case 5:
    uVar1 = 0x2010031;
    break;
  case 6:
    uVar1 = 0x2010032;
    break;
  case 7:
    uVar1 = 0x2010033;
    break;
  case 8:
    uVar1 = 0x2010034;
    break;
  case 9:
    uVar1 = 0x2010035;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
