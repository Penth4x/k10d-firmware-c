/* @k10d drain_queue_at_offset_0x244 @ 0x104690cc
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a reset helper on the object at offset 0x244, then loops calling a pop helper
 *   until it returns zero.
 * summary:
 *   The function takes an object pointer in param_1 and operates on the pointer stored at
 *   offset 0x244. It first calls release_context_two_fields with that pointer, then
 *   repeatedly calls check_transaction_context_valid with the same pointer until the return
 *   value is zero. This pattern is consistent with resetting a queue or list and then
 *   draining all remaining entries. The specific subsystem is not identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void drain_queue_at_offset_0x244(int param_1)

{
  int iVar1;
  
  release_context_two_fields(*(void **)(param_1 + 0x244));
  iVar1 = check_transaction_context_valid(*(int *)(param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_valid(*(int *)(param_1 + 0x244));
  }
  return;
}
