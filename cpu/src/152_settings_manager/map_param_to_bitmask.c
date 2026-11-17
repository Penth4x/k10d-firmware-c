/* @k10d map_param_to_bitmask @ 0x1046c4b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 152_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_param_to_bitmask(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0x81) {
    uVar1 = 4;
  }
  else if (param_2 < 0x82) {
    if (param_2 == 0) {
      uVar1 = 1;
    }
    else if (param_2 == 1) {
      uVar1 = 0;
    }
    else if (param_2 == 0x80) {
      uVar1 = 2;
    }
    else {
      uVar1 = 2;
    }
  }
  else if (param_2 == 0x82) {
    uVar1 = 8;
  }
  else if (param_2 == 0x83) {
    uVar1 = 0x10;
  }
  else if (param_2 == 0x84) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
