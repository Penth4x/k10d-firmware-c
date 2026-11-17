/* @k10d map_mode_index_to_state @ 0x104a5236
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_index_to_state(int param_1,int param_2)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  uint16_t uVar4;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x44),0x50);
  uVar4 = 1;
  if (cVar1 == '\0') {
    iVar3 = 0x59;
  }
  else {
    iVar3 = 0x56;
  }
  uVar2 = settings_getter(*(int *)(param_1 + 0x44),iVar3);
  switch(uVar2) {
  case 0:
    uVar4 = 5;
    break;
  case 1:
    uVar4 = 0;
    break;
  case 2:
    uVar4 = 3;
    break;
  case 3:
    uVar4 = 1;
    break;
  case 4:
    uVar4 = 4;
    break;
  case 5:
    uVar4 = 2;
    break;
  case 6:
    uVar4 = 6;
  }
  write_word_to_dynamic_array(param_2,0,uVar4);
  return;
}
