/* @k10d attempt_two_step_operation @ 0x10473dfe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a validation helper, then a setup helper, and finally an execution helper if both
 *   succeed.
 * summary:
 *   The function takes an object pointer (param_1) and two additional parameters. It first
 *   calls invoke_virtual_slot_two_and_store_result with fields from the object (offsets 8
 *   and 0x10) and param_2. If that returns non-zero, it calls
 *   process_event_with_retry_10473fae with the object and param_3. If
 *   process_event_with_retry_10473fae returns zero, it calls
 *   process_event_with_callback_104742be with the object and param_2, and returns 1.
 *   Otherwise, it returns 0. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t attempt_two_step_operation(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),param_2,*(uint32_t *)(param_1 + 0x10));
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = process_event_with_retry_10473fae(param_1,param_3), iVar1 == 0)) {
    process_event_with_callback_104742be(param_1,param_2);
    uVar2 = 1;
  }
  return uVar2;
}
