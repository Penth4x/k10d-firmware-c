/* @k10d deinit_subobject_at_offset_0x240 @ 0x10468f46
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a sequence of six helper functions on the sub-object pointer stored at offset
 *   0x240 of the input object.
 * summary:
 *   The function takes a pointer to a parent object and extracts two sub-object pointers
 *   from offsets 0x240 and 0x244. It calls release_pointer_at_offset_c_1046601a and
 *   release_context_fields on the first sub-object, then calls
 *   release_struct_fields_10466d06 on the second. It then enters two polling loops,
 *   repeatedly calling check_transaction_context_flag and check_transaction_context_valid
 *   on the second sub-object until they return zero. Finally, it calls
 *   release_context_two_fields on the second sub-object. The pattern suggests a shutdown or
 *   cleanup sequence for a hardware module or driver state, possibly waiting for operations
 *   to complete before finalizing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deinit_subobject_at_offset_0x240(void *param_1)

{
  int iVar1;
  
  release_pointer_at_offset_c_1046601a(*(int *)((int)param_1 + 0x240));
  release_context_fields(*(void **)((int)param_1 + 0x240));
  release_struct_fields_10466d06(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  }
  release_context_two_fields(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  }
  return;
}
