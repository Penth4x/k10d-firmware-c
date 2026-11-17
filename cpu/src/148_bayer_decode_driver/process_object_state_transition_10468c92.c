/* @k10d process_object_state_transition_10468c92 @ 0x10468c92
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Performs a state transition on an object by calling a sequence of helper functions on
 *   its sub-objects and polling a status field.
 * summary:
 *   The function takes an object pointer (param_1) and a mode flag (param_2). It calls
 *   release_context_fields on the sub-object at offset 0x240, then conditionally calls
 *   release_pointer_at_offset_c_1046601a or release_pointer_at_offset_c_1046602c based on
 *   param_2. It then calls release_context_two_fields on the sub-object at offset 0x244,
 *   followed by invoke_two_virtual_methods_10469fb6 with a constant argument. It enters a
 *   loop polling check_transaction_context_valid on the 0x244 sub-object until a condition
 *   is met, calling invoke_virtual_slot_10_1046a018 in the loop body. Finally, it calls
 *   invoke_virtual_slot_4_10469ffa and release_pointer_at_offset_c_1046601a before
 *   returning. The specific camera subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_state_transition_10468c92(int param_1,int param_2)

{
  int iVar1;
  
  release_context_fields(*(void **)(param_1 + 0x240));
  if (param_2 == 1) {
    release_pointer_at_offset_c_1046601a(*(int *)(param_1 + 0x240));
  }
  else {
    release_pointer_at_offset_c_1046602c(*(int *)(param_1 + 0x240));
  }
  release_context_two_fields(*(void **)(param_1 + 0x244));
  invoke_two_virtual_methods_10469fb6((void *)param_1,10);
  iVar1 = check_transaction_context_valid(*(int *)(param_1 + 0x244));
  while ((iVar1 != 0 && (iVar1 = invoke_virtual_slot_10_1046a018(param_1), iVar1 == 0))) {
    iVar1 = check_transaction_context_valid(*(int *)(param_1 + 0x244));
  }
  invoke_virtual_slot_4_10469ffa((void *)param_1);
  release_pointer_at_offset_c_1046601a(*(int *)(param_1 + 0x240));
  return;
}
