/* @k10d map_mode_flags_to_code @ 0x104baf66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 223_menu_display_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_flags_to_code(uint32_t param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    uVar1 = 4;
    if (param_3 != 0) {
      uVar1 = 8;
    }
  }
  else if ((param_2 == 2) && (uVar1 = 5, param_3 != 0)) {
    uVar1 = 9;
  }
  return uVar1;
}
