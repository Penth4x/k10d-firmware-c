/* @k10d map_mode_params_to_index @ 0x104baefa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 223_menu_display_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_params_to_index(uint32_t param_1,int param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  
  if (param_2 == 1) {
    uVar1 = 1;
  }
  else if (param_3 == 1) {
    uVar1 = 2;
  }
  else if (param_3 == 2) {
    uVar1 = 3;
  }
  else if (param_4 == 2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 5;
    if (param_4 != 1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
