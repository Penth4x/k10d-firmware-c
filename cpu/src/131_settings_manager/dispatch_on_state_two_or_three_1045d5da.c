/* @k10d dispatch_on_state_two_or_three_1045d5da @ 0x1045d5da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a state query and dispatches to one of two handlers based on whether the result
 *   is 2 or 3.
 * summary:
 *   Invokes invoke_virtual_slot_two_1045d4b0 to obtain an integer state. If the state is 2,
 *   it calls call_virtual_slot_two_1045d528 with param_1; if 3, it calls
 *   invoke_virtual_slot_two_1045d564 with param_1; otherwise it returns 0. The return value
 *   is the result of the selected handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_state_two_or_three_1045d5da(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_1045d4b0((int *)__frv_reg_unset(4));
  if (iVar1 == 2) {
    uVar2 = call_virtual_slot_two_1045d528(param_1);
  }
  else if (iVar1 == 3) {
    uVar2 = invoke_virtual_slot_two_1045d564(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
