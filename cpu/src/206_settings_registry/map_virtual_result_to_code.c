/* @k10d map_virtual_result_to_code @ 0x104a21fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_virtual_result_to_code(int param_1,int param_2)

{
  uint32_t uVar1;
  uint16_t uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = **(int **)(param_1 + 0x14);
  uVar1 = (**(code **)(iVar3 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar3 + 0x10),0x15);
  switch(uVar1) {
  case 0:
    uVar2 = 5;
    break;
  case 1:
    uVar2 = 2;
    break;
  case 2:
    uVar2 = 3;
    break;
  case 3:
    uVar2 = 1;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
    uVar2 = 6;
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}
