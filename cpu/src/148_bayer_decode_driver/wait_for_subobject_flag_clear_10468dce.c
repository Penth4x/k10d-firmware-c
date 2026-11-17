/* @k10d wait_for_subobject_flag_clear_10468dce @ 0x10468dce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a reset helper on a sub-object then polls a getter until it returns zero.
 * summary:
 *   The function takes a parent object pointer, dereferences the field at offset 0x244 to
 *   get a sub-object, and passes it to release_context_two_fields. It then enters a loop
 *   calling check_transaction_context_valid on the same sub-object until the return value
 *   is 0. The specific roles of the sub-object and the two helper functions are unknown,
 *   but the pattern is a standard wait-for-condition loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_subobject_flag_clear_10468dce(void *param_1)

{
  int iVar1;
  
  release_context_two_fields(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
  }
  return;
}
