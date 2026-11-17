/* @k10d map_mode_code_to_index_1045b5a6 @ 0x1045b5a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_code_to_index_1045b5a6(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  param_2 = param_2 & 0xf;
  if (param_2 == 1) {
    uVar1 = 0;
  }
  else if ((param_2 == 4) || (param_2 == 8)) {
    uVar1 = 1;
  }
  else if ((param_2 == 5) || (param_2 == 9)) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
