/* @k10d map_size_to_shift_amount @ 0x104828d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_size_to_shift_amount(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x8001) {
    uVar1 = 2;
  }
  else if (param_2 < 0x10001) {
    uVar1 = 4;
  }
  else if (param_2 < 0x40001) {
    uVar1 = 8;
  }
  else if (param_2 < 0xfc001) {
    uVar1 = 0x10;
  }
  else if (param_2 < 0x1f8001) {
    uVar1 = 0x20;
  }
  else if ((param_2 < 0x1f8001) || (0x3f0000 < param_2)) {
    if ((param_2 < 0x3f0001) || (0x7e0000 < param_2)) {
      if ((param_2 < 0x7e0001) || (uVar1 = 0xff, 0x4000000 < param_2)) {
        uVar1 = 0x10;
      }
    }
    else {
      uVar1 = 0x80;
    }
  }
  else {
    uVar1 = 0x40;
  }
  return uVar1;
}
