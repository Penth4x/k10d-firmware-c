/* @k10d map_state_to_code_and_write @ 0x104a4f72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_state_to_code_and_write(int param_1,int param_2)

{
  char cVar1;
  uint8_t uVar2;
  uint16_t uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (((*(char *)(*(int *)(param_1 + 0x58) + 0x50c) == '\0') &&
      (cVar1 = settings_getter(*(int *)(param_1 + 0x44),0xba), cVar1 == '\x01')) &&
     (iVar4 = **(int **)(param_1 + 0x1c),
     iVar4 = (((vtbl_entry*)(iVar4))[3].fn)
                       ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar4))[3].adj,3),
     iVar4 != 0)) {
    uVar3 = 9;
  }
  else {
    uVar2 = settings_getter(*(int *)(param_1 + 0x44),0xd);
    switch(uVar2) {
    case 0:
      uVar3 = 0;
      break;
    case 1:
      uVar3 = 1;
      break;
    case 2:
      uVar3 = 2;
      break;
    case 3:
      uVar3 = 10;
      break;
    case 4:
      uVar3 = 6;
      break;
    case 5:
      uVar3 = 7;
      break;
    case 6:
      uVar3 = 8;
      break;
    case 7:
      uVar3 = 4;
      break;
    case 8:
      uVar3 = 9;
      break;
    case 9:
    case 10:
    case 0xb:
      uVar3 = 5;
      break;
    case 0xc:
    case 0xd:
    case 0xe:
      uVar3 = 0x11;
    }
  }
  write_word_to_dynamic_array(param_2,0,uVar3);
  return;
}
