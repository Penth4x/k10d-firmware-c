/* @k10d dispatch_state_transition_104adbd8 @ 0x104adbd8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_transition_104adbd8(int param_1,uint32_t param_2,uint32_t param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = dispatch_virtual_slot_two_104af096(param_1,4,1);
  uVar1 = uVar1 & 3;
  if (uVar1 == 0) {
    iVar2 = set_object_state_flags(param_4,0,0);
  }
  else if (uVar1 == 2) {
    iVar2 = set_object_state_flags(param_4,1,0);
  }
  else if (uVar1 == 1) {
    iVar2 = set_object_state_flags(param_4,0,1);
  }
  else {
    if (uVar1 != 3) {
      invoke_virtual_slot_two_104ae2e4((void *)param_1);
      return 0;
    }
    iVar2 = set_object_state_flags(param_4,1,1);
  }
  if (iVar2 == 0) {
    invoke_virtual_slot_two_104ae294((void *)param_1);
  }
  else {
    invoke_virtual_slot_two_104ae35c((void *)param_1);
  }
  return 0;
}
