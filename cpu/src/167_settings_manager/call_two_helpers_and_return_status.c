/* @k10d call_two_helpers_and_return_status @ 0x10474940
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions in sequence and returns a success/failure flag based on
 *   their results.
 * summary:
 *   The function first calls invoke_virtual_slot_two_and_store_result with three arguments
 *   derived from param_1 and param_2. If that call returns non-zero, it then calls
 *   process_event_with_retry_10474a2e with param_1, param_3, and param_4. The return value
 *   is 1 if the second call succeeds (returns non-zero), otherwise 0. The specific roles of
 *   the callees are unknown, so the function acts as a simple two-step conditional wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_status(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),param_2,*(uint32_t *)(param_1 + 0x10));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = process_event_with_retry_10474a2e(param_1,param_3,param_4);
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
