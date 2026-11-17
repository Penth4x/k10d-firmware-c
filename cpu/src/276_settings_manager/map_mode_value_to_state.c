/* @k10d map_mode_value_to_state @ 0x1051cb18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_value_to_state(uint32_t param_1,void *param_2,int param_3)

{
  uint16_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 0x20);
  uVar1 = 0;
  if (iVar2 == 3) {
    uVar1 = 1;
  }
  else if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
    uVar1 = 3;
  }
  write_word_to_dynamic_array((int)param_2,0,uVar1);
  return;
}
