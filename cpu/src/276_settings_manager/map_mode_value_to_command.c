/* @k10d map_mode_value_to_command @ 0x1051cb4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_value_to_command(uint32_t param_1,void *param_2,int param_3)

{
  int iVar1;
  uint16_t uVar2;
  
  iVar1 = *(int *)(param_3 + 0x20);
  uVar2 = 0;
  if (iVar1 == 2) {
    uVar2 = 6;
  }
  else if (iVar1 == 1) {
    uVar2 = 6;
  }
  else if (iVar1 == 3) {
    uVar2 = 0x8023;
  }
  else if (iVar1 == 0) {
    uVar2 = 2;
  }
  write_word_to_dynamic_array((int)param_2,0,uVar2);
  return;
}
