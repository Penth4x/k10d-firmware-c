/* @k10d clamp_index_to_range_10434fca @ 0x10434fca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 123_menu_state_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clamp_index_to_range_10434fca(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 1) {
    uVar1 = 0;
  }
  else if (param_2 == 2) {
    uVar1 = 1;
  }
  else if (param_2 == 3) {
    uVar1 = 2;
  }
  else if (param_2 == 4) {
    uVar1 = 3;
  }
  return uVar1;
}
