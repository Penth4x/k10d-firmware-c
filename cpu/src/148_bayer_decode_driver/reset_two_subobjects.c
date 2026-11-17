/* @k10d reset_two_subobjects @ 0x10468fd2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Resets two sub-objects at offsets 0x240 and 0x244 of a parent structure by calling
 *   their init and drain helpers.
 * summary:
 *   The function takes a parent object pointer and a flag. It calls a sequence of helper
 *   functions on the sub-object at offset 0x240, then calls a helper on the sub-object at
 *   offset 0x244 and loops calling another helper until it returns zero. It repeats a
 *   similar pattern for the second sub-object. The flag param_2 controls whether an
 *   additional helper is called on the first sub-object. All callees are unknown, so the
 *   specific subsystem is not identifiable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_two_subobjects(void *param_1,int param_2)

{
  int iVar1;
  
  release_pointer_at_offset_c_1046602c(*(uint32_t *)((int)param_1 + 0x240));
  release_three_struct_fields(*(uint32_t *)((int)param_1 + 0x240));
  release_struct_fields_10466d06(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  }
  release_context_fields(*(void **)((int)param_1 + 0x240));
  if (param_2 == 1) {
    release_pointer_at_offset_c_1046601a(*(int *)((int)param_1 + 0x240));
  }
  release_context_two_fields(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  }
  release_pointer_at_offset_c_1046601a(*(int *)((int)param_1 + 0x240));
  return;
}
