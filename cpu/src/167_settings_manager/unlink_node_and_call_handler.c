/* @k10d unlink_node_and_call_handler @ 0x10477eb0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Removes a node from a linked list at offset 0x14 and invokes a handler on the removed
 *   node.
 * summary:
 *   The function calls an unknown helper on param_1+0x74, then performs a standard linked-
 *   list unlink operation by copying the next pointer from param_2+0x14 into param_1+0x88
 *   and updating param_2's next pointer to param_1+4. It then calls
 *   dispatch_param_by_type_id with the original next pointer and param_2, returning the
 *   result. The specific subsystem is not identifiable from the provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t unlink_node_and_call_handler(int param_1,int param_2)

{
  uint32_t uVar1;
  
  initialize_struct_header((void *)(param_1 + 0x74));
  *(uint32_t *)(param_1 + 0x88) = *(uint32_t *)(param_2 + 0x14);
  *(int *)(param_2 + 0x14) = param_1 + 4;
  uVar1 = dispatch_param_by_type_id(*(uint32_t *)(param_1 + 0x14),param_2);
  return uVar1;
}
