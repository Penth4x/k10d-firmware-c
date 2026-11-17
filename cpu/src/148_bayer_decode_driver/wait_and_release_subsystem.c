/* @k10d wait_and_release_subsystem @ 0x1046910a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a subsystem, waits for a status flag to clear, then performs cleanup.
 * summary:
 *   The function takes a pointer to a state structure and accesses fields at offsets 0x240
 *   and 0x244. It calls release_three_struct_fields and release_context_two_fields on these
 *   fields, then polls check_transaction_context_valid in a loop until it returns zero.
 *   Finally, it calls release_context_fields and release_pointer_at_offset_c_1046601a,
 *   likely to release or finalize the subsystem state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_and_release_subsystem(void *param_1)

{
  int iVar1;
  
  release_three_struct_fields(*(uint32_t *)((int)param_1 + 0x240));
  release_context_two_fields(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  }
  release_context_fields(*(void **)((int)param_1 + 0x240));
  release_pointer_at_offset_c_1046601a(*(int *)((int)param_1 + 0x240));
  return;
}
