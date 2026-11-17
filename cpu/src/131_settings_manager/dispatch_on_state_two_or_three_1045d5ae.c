/* @k10d dispatch_on_state_two_or_three_1045d5ae @ 0x1045d5ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a state value and dispatches to one of two handlers based on whether it is 2 or
 *   3.
 * summary:
 *   Calls invoke_virtual_slot_two_1045d4b0 to obtain an integer state. If the state is 2,
 *   it calls call_virtual_slot_two_1045d50a with param_1; if 3, it calls
 *   invoke_virtual_slot_two_1045d546 with param_1; otherwise it returns 0. The return value
 *   is the result of the selected handler. The specific subsystem or meaning of the state
 *   values is not determinable from the provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_state_two_or_three_1045d5ae(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_1045d4b0((int *)__frv_reg_unset(4));
  if (iVar1 == 2) {
    uVar2 = call_virtual_slot_two_1045d50a(param_1);
  }
  else if (iVar1 == 3) {
    uVar2 = invoke_virtual_slot_two_1045d546(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
