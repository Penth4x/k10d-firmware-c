/* @k10d map_mode_index_to_id_103a3f54 @ 0x103a3f54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_id_103a3f54(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x2010052;
    }
    else if (param_3 == 1) {
      uVar1 = 0x2010053;
    }
    else if (param_3 == 2) {
      uVar1 = 0x2010054;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x2010055;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2010056;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x2010057;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2010058;
    }
    else {
      uVar1 = 0x2010057;
    }
    break;
  case 3:
    uVar1 = 0x2010059;
    break;
  case 4:
    uVar1 = 0x201005a;
    break;
  case 5:
    uVar1 = 0x201005b;
    break;
  case 6:
    uVar1 = 0x201005c;
    break;
  case 7:
    uVar1 = 0x201005d;
    break;
  case 8:
    uVar1 = 0x201005e;
    break;
  case 9:
    uVar1 = 0x201005f;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
