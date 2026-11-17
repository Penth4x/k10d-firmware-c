/* @k10d poll_subobject_until_idle_10468e0c @ 0x10468e0c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Resets a sub-object, waits in a loop for a status flag to clear, then finalizes the
 *   parent object.
 * summary:
 *   The function takes a parent object pointer and operates on a sub-object located at
 *   offset 0x244. It first calls release_context_two_fields on the sub-object, then calls
 *   invoke_two_virtual_methods_10469fb6 on the parent with argument 10. It enters a loop
 *   checking a status value from check_transaction_context_valid on the sub-object; if the
 *   status is non-zero, it calls invoke_virtual_slot_10_1046a018 on the parent and re-
 *   checks the status until it becomes zero. Finally, it calls
 *   invoke_virtual_slot_4_10469ffa on the parent. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_subobject_until_idle_10468e0c(void *param_1)

{
  int iVar1;
  
  release_context_two_fields(*(void **)((int)param_1 + 0x244));
  invoke_two_virtual_methods_10469fb6(param_1,10);
  iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  while ((iVar1 != 0 && (iVar1 = invoke_virtual_slot_10_1046a018((int)param_1), iVar1 == 0))) {
    iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  }
  invoke_virtual_slot_4_10469ffa(param_1);
  return;
}
