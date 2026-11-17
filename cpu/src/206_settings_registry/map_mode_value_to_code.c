/* @k10d map_mode_value_to_code @ 0x104a5018
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_value_to_code(int param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  uint16_t uVar3;
  
  cVar2 = settings_getter(*(int *)(param_1 + 0x44),0xd);
  uVar3 = 0;
  if (cVar2 == '\0') {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x60) + 0x10);
    if (uVar1 == 4) {
      uVar3 = 7;
    }
    else if (uVar1 < 5) {
      if (uVar1 == 0) {
        uVar3 = 1;
      }
      else if (uVar1 == 1) {
        uVar3 = 2;
      }
      else if (uVar1 == 2) {
        uVar3 = 10;
      }
      else if (uVar1 == 3) {
        uVar3 = 6;
      }
    }
    else if (uVar1 == 5) {
      uVar3 = 8;
    }
    else if (uVar1 == 6) {
      uVar3 = 4;
    }
    else if (uVar1 == 0xfffe) {
      uVar3 = 0xfffe;
    }
    else if (uVar1 == 0xffff) {
      uVar3 = 0xffff;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  write_word_to_dynamic_array(param_2,0,uVar3);
  return;
}
