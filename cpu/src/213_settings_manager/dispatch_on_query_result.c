/* @k10d dispatch_on_query_result @ 0x104aeb8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a state via dispatch_state_based_on_flag_104af61a and dispatches to one of four
 *   handlers based on the returned code.
 * summary:
 *   Calls dispatch_state_based_on_flag_104af61a(param_4,0,0) to obtain an integer status.
 *   If the result is 0 it calls invoke_virtual_slot_two_104ae294(param_1); if 3 it calls
 *   invoke_virtual_slot_two_104ae334(param_1); if 1, 4, or 6 it calls
 *   invoke_virtual_slot_two_104ae30c(param_1); otherwise it calls
 *   invoke_virtual_slot_two_104ae3ac(param_1). Always returns 0. The specific meaning of
 *   the status codes and the handlers is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_query_result(cls_105b7798 *param_1,uint32_t param_2,uint32_t param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = dispatch_state_based_on_flag_104af61a(param_4,0,0);
  if (iVar1 == 0) {
    invoke_virtual_slot_two_104ae294(param_1);
  }
  else if (iVar1 == 3) {
    invoke_virtual_slot_two_104ae334(param_1);
  }
  else if (((iVar1 == 1) || (iVar1 == 4)) || (iVar1 == 6)) {
    invoke_virtual_slot_two_104ae30c(param_1);
  }
  else {
    invoke_virtual_slot_two_104ae3ac((int)param_1);
  }
  return 0;
}
