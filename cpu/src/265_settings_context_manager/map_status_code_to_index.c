/* @k10d map_status_code_to_index @ 0x105015a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_status_code_to_index(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (*(code *)0x104536d8/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11);
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else if (iVar1 == 2) {
    uVar2 = 1;
  }
  else if (iVar1 == 4) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
    if (iVar1 != 8) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
