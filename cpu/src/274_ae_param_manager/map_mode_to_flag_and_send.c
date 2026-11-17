/* @k10d map_mode_to_flag_and_send @ 0x1051a2cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_to_flag_and_send(uint32_t param_1,int param_2,int param_3)

{
  uint16_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 0x1c);
  uVar1 = 1;
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else if (iVar2 == 2) {
    uVar1 = 1;
  }
  else if (iVar2 == 1) {
    uVar1 = 7;
  }
  write_word_to_dynamic_array(param_2,0,uVar1);
  return;
}
