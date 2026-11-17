/* @k10d process_object_with_wait_loop @ 0x10468ec8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Initializes object fields, calls a helper with constant 10, and waits in a loop until a
 *   status check returns non-zero.
 * summary:
 *   The function takes a pointer to an object and calls three initialization or setup
 *   functions on fields at offsets 0x240 and 0x244. It then calls
 *   invoke_two_virtual_methods_10469fb6 with the object and the integer 10. A while loop
 *   repeatedly calls check_transaction_context_flag on the field at 0x244 and
 *   invoke_virtual_slot_10_1046a018 on the object, continuing as long as the result of
 *   check_transaction_context_flag is non-zero and invoke_virtual_slot_10_1046a018 returns
 *   zero. Finally, it calls invoke_virtual_slot_4_10469ffa on the object. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_with_wait_loop(void *param_1)

{
  int iVar1;
  
  release_pointer_at_offset_c_1046601a(*(int *)((int)param_1 + 0x240));
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
