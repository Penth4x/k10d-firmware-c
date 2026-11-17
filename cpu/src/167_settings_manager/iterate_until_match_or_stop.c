/* @k10d iterate_until_match_or_stop @ 0x10473e8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a setup function, then loops calling a step function until a match is found or a
 *   stop code is returned.
 * summary:
 *   First calls invoke_virtual_slot_two_and_store_result with fields from param_1 and
 *   param_2. If that returns non-zero, it retrieves two values via
 *   call_helper_with_offset_c_10476666 and call_vtable_slot_at_offset_c. It then enters a
 *   loop calling call_with_offset_c_field_1047668a to get the next value and
 *   process_event_with_retry_10473fae to process the current value, continuing until the
 *   current value matches the target or process_event_with_retry_10473fae returns 2.
 *   Finally calls process_event_with_callback_104742be and returns 1 if the loop did not
 *   stop with code 2, else 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_until_match_or_stop(int param_1,uint32_t param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  
  iVar2 = invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),param_2,*(uint32_t *)(param_1 + 0x10));
  uVar5 = 1;
  if (iVar2 != 0) {
    iVar3 = call_helper_with_offset_c_10476666(*(int *)(param_1 + 8));
    iVar2 = call_vtable_slot_at_offset_c(*(int *)(param_1 + 8));
    iVar6 = 0;
    if (iVar3 != 0) {
      bVar1 = false;
      do {
        if (iVar2 == iVar3) {
          bVar1 = true;
        }
        iVar4 = call_with_offset_c_field_1047668a(*(int *)(param_1 + 8));
        iVar6 = process_event_with_retry_10473fae(param_1,iVar2);
      } while ((!bVar1) && (iVar2 = iVar4, iVar6 != 2));
    }
    process_event_with_callback_104742be(param_1,param_2);
    uVar5 = 1;
    if (iVar6 != 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}
