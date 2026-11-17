/* @k10d dispatch_on_two_state_value @ 0x1045d582
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_two_state_value(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_1045d4b0((int *)__frv_reg_unset(4));
  if (iVar1 == 2) {
    uVar2 = invoke_virtual_slot_two_1045d4ce(param_1);
  }
  else if (iVar1 == 3) {
    uVar2 = invoke_virtual_slot_two_1045d4ec(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
