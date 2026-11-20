/* @k10d dispatch_state_transition_104ae99c @ 0x104ae99c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_transition_104ae99c(cls_105b7770 *param_1,uint32_t param_2,uint32_t param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,4,1);
  iVar2 = check_object_state_flag_104af3f0(param_4);
  if (iVar2 != 0) {
    invoke_virtual_slot_two_104ae334(param_1);
    return 0;
  }
  if ((uVar1 & 0xf0) == 0) {
    bVar3 = dispatch_operation_by_mode(param_1,uVar1,param_4);
    if (bVar3) goto LAB_104ae9e8;
  }
  else {
    bVar3 = dispatch_mode_change_request_104aea08(param_1,uVar1,param_4);
    if (bVar3) {
LAB_104ae9e8:
      invoke_virtual_slot_two_104ae294(param_1);
      return 0;
    }
  }
  invoke_virtual_slot_two_104ae30c(param_1);
  return 0;
}
