/* @k10d deactivate_object_with_wait_loop @ 0x10468b8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Deactivates an object by calling conditional and unconditional helpers, then waits for
 *   a status flag to clear.
 * summary:
 *   The function branches on param_2 to call either release_pointer_at_offset_c_1046601a or
 *   release_pointer_at_offset_c_1046602c on a pointer at offset 0x240 of param_1. It then
 *   calls release_three_struct_fields, release_struct_fields_10466d06, and
 *   invoke_two_virtual_methods_10469fb6. A loop follows that repeatedly checks a value from
 *   check_transaction_context_flag and calls invoke_virtual_slot_10_1046a018 until the
 *   condition is met, finally calling invoke_virtual_slot_4_10469ffa. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deactivate_object_with_wait_loop(void *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    release_pointer_at_offset_c_1046601a(*(int *)((int)param_1 + 0x240));
  }
  else {
    release_pointer_at_offset_c_1046602c(*(int *)((int)param_1 + 0x240));
  }
  release_three_struct_fields(*(uint32_t *)((int)param_1 + 0x240));
  release_struct_fields_10466d06(*(void **)((int)param_1 + 0x244));
  invoke_two_virtual_methods_10469fb6(param_1,10);
  iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  while ((iVar1 != 0 && (iVar1 = invoke_virtual_slot_10_1046a018((int)param_1), iVar1 == 0))) {
    iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  }
  invoke_virtual_slot_4_10469ffa(param_1);
  return;
}
