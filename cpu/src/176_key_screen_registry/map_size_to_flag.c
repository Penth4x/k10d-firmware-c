/* @k10d map_size_to_flag @ 0x104829b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_size_to_flag(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x4001) {
    uVar1 = 0x10;
  }
  else if (param_2 < 0x20001) {
    uVar1 = 0x20;
  }
  else if (param_2 < 0x80001) {
    uVar1 = 0x40;
  }
  else if (param_2 < 0x400001) {
    uVar1 = 0x80;
  }
  else if (param_2 < 0x4000001) {
    uVar1 = 0x2000;
  }
  else {
    uVar1 = 0x80;
  }
  return uVar1;
}
