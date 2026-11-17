/* @k10d copy_four_bytes_from_source @ 0x10475f86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_bytes_from_source(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 1) {
    iVar1 = (*(code *)0x10459370/*ROM*/)(*(uint32_t *)(param_1 + 4));
    iVar2 = 4;
  }
  else if (param_4 == 0) {
    iVar1 = (*(code *)0x10459370/*ROM*/)(*(uint32_t *)(param_1 + 4));
    iVar2 = 4;
  }
  else {
    iVar1 = (*(code *)0x10459368/*ROM*/)();
    iVar2 = 4;
  }
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + param_2) = *(uint8_t *)(iVar2 + iVar1);
  } while (iVar2 != 0);
  return;
}
