/* @k10d wait_for_pointer_flag_clear_10468d2e @ 0x10468d2e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a pointer at offset 0x244, then polls another helper until it returns
 *   zero.
 * summary:
 *   The function dereferences param_1 + 0x244 and passes that pointer to
 *   release_struct_fields_10466d06. It then enters a loop calling
 *   check_transaction_context_flag on the same pointer until the return value is 0. The
 *   specific roles of the callees and the data at offset 0x244 are unknown, so the
 *   operation is described mechanically as a wait/poll loop on a derived pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_pointer_flag_clear_10468d2e(void *param_1)

{
  int iVar1;
  
  release_struct_fields_10466d06(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  }
  return;
}
