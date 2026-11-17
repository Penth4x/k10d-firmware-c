/* @k10d map_mode_index_to_flag_1047cfd6 @ 0x1047cfd6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_flag_1047cfd6(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0xffffffff;
  switch(*(uint32_t *)(param_1 + 0x60)) {
  case 0:
    uVar1 = 2;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 4;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 0;
    break;
  case 5:
    uVar1 = 1;
  }
  return uVar1;
}
