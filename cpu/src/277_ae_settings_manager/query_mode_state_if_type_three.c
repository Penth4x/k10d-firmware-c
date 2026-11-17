/* @k10d query_mode_state_if_type_three @ 0x1051dc52
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_mode_state_if_type_three(uint32_t param_1,int *param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  
  uVar2 = 0;
  if (*(short *)(param_3 + 2) == 3) {
    uVar3 = read_u16_from_struct_array(param_3,0);
    switch(uVar3) {
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = 2;
      break;
    case 3:
      iVar1 = 3;
      break;
    case 4:
      iVar1 = 4;
      break;
    case 5:
      iVar1 = 5;
      break;
    case 6:
      iVar1 = 6;
      break;
    case 7:
      iVar1 = 7;
      break;
    case 8:
      iVar1 = 8;
      break;
    default:
      iVar1 = 0;
    }
    *param_2 = iVar1;
    uVar2 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
