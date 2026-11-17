/* @k10d update_byte_at_offset_with_mask @ 0x104646b0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   Applies a masked byte update to a buffer at an offset stored in the object, guarded by
 *   enter/exit calls.
 * summary:
 *   Calls free_cpucom_context, reads an offset from param_1+0x10, and if non-zero updates
 *   the byte at param_2+offset using a mask derived from param_3 and param_4. Sets the byte
 *   at param_1+0x60 to 1. Calls free_cpucom_context_ref. The specific subsystem role is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_byte_at_offset_with_mask(void *param_1,int param_2,byte param_3,byte param_4)

{
  int iVar1;
  
  free_cpucom_context(param_1);
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 != 0) {
    *(byte *)(param_2 + iVar1) = *(byte *)(param_2 + iVar1) & (param_4 ^ 0xff) | param_3 & param_4;
    *(uint8_t *)((int)param_1 + 0x60) = 1;
  }
  free_cpucom_context_ref(param_1);
  return;
}
