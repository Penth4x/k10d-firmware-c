/* @k10d map_mode_index_to_id_103aa26c @ 0x103aa26c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_id_103aa26c(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x200003a;
    }
    else if (param_3 == 1) {
      uVar1 = 0x200003b;
    }
    else if (param_3 == 2) {
      uVar1 = 0x200003c;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x200003d;
    }
    else if (param_3 == 3) {
      uVar1 = 0x200003e;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x200003f;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2000040;
    }
    else {
      uVar1 = 0x200003f;
    }
    break;
  case 3:
    uVar1 = 0x2000041;
    break;
  case 4:
    uVar1 = 0x2000042;
    break;
  case 5:
    uVar1 = 0x2000043;
    break;
  case 6:
    uVar1 = 0x2000044;
    break;
  case 7:
    uVar1 = 0x2000045;
    break;
  case 8:
    uVar1 = 0x2000046;
    break;
  case 9:
    uVar1 = 0x2000047;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
