/* @k10d teardown_object_at_offset_0x240 @ 0x10468e6e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls four helper functions on fields at offsets 0x240 and 0x244 of the object passed
 *   in param_1.
 * summary:
 *   The function takes a pointer to an object and invokes
 *   release_pointer_at_offset_c_1046601a and release_three_struct_fields on the integer at
 *   offset 0x240. It then calls release_struct_fields_10466d06 on the pointer at offset
 *   0x244, followed by a loop that repeatedly calls check_transaction_context_flag on the
 *   same pointer until it returns zero. The callees are not named, so the specific
 *   subsystem or resource being managed is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void teardown_object_at_offset_0x240(void *param_1)

{
  int iVar1;
  
  release_pointer_at_offset_c_1046601a(*(int *)((int)param_1 + 0x240));
  release_three_struct_fields(*(uint32_t *)((int)param_1 + 0x240));
  release_struct_fields_10466d06(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  }
  return;
}
