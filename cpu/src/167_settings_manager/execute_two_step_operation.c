/* @k10d execute_two_step_operation @ 0x10473dbc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs a two-step operation on an object, returning success only if both steps
 *   complete without error.
 * summary:
 *   The function first calls invoke_virtual_slot_two_and_store_result with fields from the
 *   object at param_1 (offsets 8 and 0x10) and param_2. If this initial check passes (non-
 *   zero), it calls process_event_with_callback_10474134 with the object and params 3/4. If
 *   that also succeeds (zero), it calls process_event_with_callback_104742be and returns 1.
 *   Otherwise, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t execute_two_step_operation(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),param_2,*(uint32_t *)(param_1 + 0x10));
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = process_event_with_callback_10474134(param_1,param_3,param_4), iVar1 == 0)) {
    process_event_with_callback_104742be(param_1,param_2);
    uVar2 = 1;
  }
  return uVar2;
}
