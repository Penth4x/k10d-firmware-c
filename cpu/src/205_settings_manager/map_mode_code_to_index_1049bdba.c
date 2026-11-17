/* @k10d map_mode_code_to_index_1049bdba @ 0x1049bdba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_code_to_index_1049bdba(int param_1,int param_2)

{
  uint32_t uVar1;
  uint16_t uVar2;
  
  uVar2 = read_u16_from_struct_array(param_2,0);
  switch(uVar2) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x10:
    uVar1 = 7;
    break;
  case 0x11:
    uVar1 = 8;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x6c) = uVar1;
  return;
}
