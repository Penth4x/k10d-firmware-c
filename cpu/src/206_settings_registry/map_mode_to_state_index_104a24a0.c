/* @k10d map_mode_to_state_index_104a24a0 @ 0x104a24a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_to_state_index_104a24a0(int param_1,int param_2)

{
  int iVar1;
  uint16_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_1045ffda((void *)(*(uint32_t *)(param_1 + 0xc)));
  if (((iVar1 == 0) || (iVar1 == 1)) || (uVar2 = 0, iVar1 == 2)) {
    iVar1 = get_AEB_XVD((void *)(*(uint32_t *)(param_1 + 0x14)));
    if (iVar1 == 5) {
      uVar2 = 2;
    }
    else if (iVar1 == 6) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      if (iVar1 == 9) {
        uVar2 = 3;
      }
    }
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}
