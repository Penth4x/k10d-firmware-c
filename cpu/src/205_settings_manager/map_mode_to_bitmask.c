/* @k10d map_mode_to_bitmask @ 0x1049c5ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_to_bitmask(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 1:
  case 2:
  case 6:
  case 7:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
  case 9:
  case 0xb:
    uVar1 = 4;
    break;
  case 5:
  case 10:
  case 0xc:
    uVar1 = 8;
    break;
  case 8:
    uVar1 = 2;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
