/* @k10d map_size_to_shift_value @ 0x1048295a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_size_to_shift_value(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x1001) {
    uVar1 = 0x10;
  }
  else if (param_2 < 0x80001) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x3f;
  }
  return uVar1;
}
