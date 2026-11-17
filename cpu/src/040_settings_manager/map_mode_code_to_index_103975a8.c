/* @k10d map_mode_code_to_index_103975a8 @ 0x103975a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_code_to_index_103975a8(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0x5010003) {
    uVar2 = 0;
  }
  else if (iVar1 == 0x5010004) {
    uVar2 = 1;
  }
  else {
    if (iVar1 != 0x5010005) {
      return;
    }
    uVar2 = 2;
  }
  (*(code *)0x1039c3f6/*ROM*/)(param_1 + 8,uVar2);
  return;
}
