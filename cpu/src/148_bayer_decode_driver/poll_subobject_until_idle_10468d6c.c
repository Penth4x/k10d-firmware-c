/* @k10d poll_subobject_until_idle_10468d6c @ 0x10468d6c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Resets a sub-object, waits in a loop until a status check reports completion, then
 *   finalizes the parent object.
 * summary:
 *   The function operates on an object passed in param_1. It first calls
 *   release_struct_fields_10466d06 on a pointer stored at offset 0x244 of the object, then
 *   calls invoke_two_virtual_methods_10469fb6 with the object and the constant 10. It
 *   enters a loop that repeatedly calls check_transaction_context_flag on the 0x244 sub-
 *   object and invoke_virtual_slot_10_1046a018 on the main object until a condition is met.
 *   Finally, it calls invoke_virtual_slot_4_10469ffa on the object. The specific subsystem
 *   is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_subobject_until_idle_10468d6c(void *param_1)

{
  int iVar1;
  
  release_struct_fields_10466d06(*(void **)((int)param_1 + 0x244));
  invoke_two_virtual_methods_10469fb6(param_1,10);
  iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  while ((iVar1 != 0 && (iVar1 = invoke_virtual_slot_10_1046a018((int)param_1), iVar1 == 0))) {
    iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  }
  invoke_virtual_slot_4_10469ffa(param_1);
  return;
}
