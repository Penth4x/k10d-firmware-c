/* @k10d map_mode_bit_to_code_1046c480 @ 0x1046c480
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 152_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_bit_to_code_1046c480(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 0x80;
    break;
  default:
    uVar1 = 0;
    break;
  case 4:
    uVar1 = 0x81;
    break;
  case 8:
    uVar1 = 0x82;
    break;
  case 0x10:
    uVar1 = 0x83;
    break;
  case 0x20:
    uVar1 = 0x84;
  }
  return uVar1;
}
