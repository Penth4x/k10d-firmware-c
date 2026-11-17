/* @k10d release_object_with_wait @ 0x10468c1a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Releases two sub-objects at offsets 0x240 and 0x244, waiting for the second to become
 *   idle before finalizing.
 * summary:
 *   The function calls release_context_fields on the pointer at param_1+0x240, then
 *   conditionally calls release_pointer_at_offset_c_1046601a or
 *   release_pointer_at_offset_c_1046602c based on param_2. It then calls
 *   release_context_two_fields on the pointer at param_1+0x244 and loops calling
 *   check_transaction_context_valid until it returns 0, suggesting a wait-for-idle or drain
 *   operation. Finally, it calls release_pointer_at_offset_c_1046601a again on the first
 *   sub-object. The pattern suggests a cleanup or deactivation sequence for a composite
 *   object with two components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_with_wait(int param_1,int param_2)

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
  iVar1 = check_transaction_context_valid(*(int *)(param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_valid(*(int *)(param_1 + 0x244));
  }
  release_pointer_at_offset_c_1046601a(*(int *)(param_1 + 0x240));
  return;
}
