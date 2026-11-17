/* @k10d attempt_three_step_initialization @ 0x104d8414
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t attempt_three_step_initialization(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = return_r4_passthrough_104d800e();
  iVar2 = invoke_virtual_slot_seven_104d6cf6(uVar1,param_1 + 0x2b1c);
  if (((iVar2 == 0) || (iVar2 = dispatch_event_with_status_check(param_1,param_1 + 0x2b1c), iVar2 == 0)) ||
     (iVar2 = dispatch_virtual_method_on_param(param_1), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = return_r4_passthrough_104d800e();
    add_offset_by_flag(uVar1,1);
    iVar2 = (*(code *)0x104d7eda/*ROM*/)();
    uVar1 = 1;
    if (iVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
