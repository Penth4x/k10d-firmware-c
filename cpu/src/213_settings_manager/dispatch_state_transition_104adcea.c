/* @k10d dispatch_state_transition_104adcea @ 0x104adcea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates a minimum size parameter and dispatches to one of several state-change
 *   handlers based on a status code.
 * summary:
 *   The function first checks if param_3 is at least 8, returning 0 if not. It calls
 *   dispatch_state_based_on_flag_104af61a to retrieve a status code. Depending on the code
 *   (0, 1, 3, 4, or other), it calls different handlers (invoke_virtual_slot_two_104ae294,
 *   invoke_virtual_slot_two_104ae35c, invoke_virtual_slot_two_104ae30c,
 *   invoke_virtual_slot_two_104ae334) and potentially invoke_virtual_slot_two_104af0c8.
 *   Finally, it calls invoke_virtual_slot_4_104af106 and returns its result. The specific
 *   camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_transition_104adcea(int *param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 8) {
    return 0;
  }
  iVar1 = dispatch_state_based_on_flag_104af61a(param_4,0,0);
  if (iVar1 == 0) {
    iVar1 = get_or_init_vtable_slot2(param_4);
    if (iVar1 != 0) {
      *param_2 = iVar1;
      param_2[1] = param_4[2];
      uVar2 = invoke_virtual_slot_two_104af0c8(param_1,param_2,8);
      invoke_virtual_slot_two_104ae294(param_1);
      return uVar2;
    }
  }
  else {
    if (iVar1 == 1) {
      invoke_virtual_slot_two_104ae35c(param_1);
      goto LAB_104add78;
    }
    if ((iVar1 != 3) && (iVar1 != 4)) {
      invoke_virtual_slot_two_104ae30c(param_1);
      goto LAB_104add78;
    }
  }
  invoke_virtual_slot_two_104ae334(param_1);
LAB_104add78:
  uVar2 = invoke_virtual_slot_4_104af106(param_1);
  return uVar2;
}
