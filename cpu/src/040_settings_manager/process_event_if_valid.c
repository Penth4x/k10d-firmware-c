/* @k10d process_event_if_valid @ 0x10392bfa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates an event object and, if successful, dispatches it through a sequence of
 *   handler calls.
 * summary:
 *   The function calls forward_three_args_via_helper to validate or extract data from
 *   param_1 into local stack variables. If the validation returns non-zero, it proceeds to
 *   call set_three_fields_at_offset_c with the extracted data, followed by
 *   call_three_init_helpers_10392d02, a call to request_ui_sync_code_4 using a pointer from
 *   param_1+8, and finally two additional functions get_or_create_sram_object_1040a240 and
 *   init_object_flag_and_subobj. The specific subsystem is not identifiable from the
 *   available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_event_if_valid(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_14;
  uint32_t uStack_10;
  byte bStack_9;
  
  bStack_9 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = forward_three_args_via_helper(param_1,&bStack_9,&uStack_14,&uStack_10);
  if (iVar1 != 0) {
    set_three_fields_at_offset_c(param_1,(uint)bStack_9,(short)uStack_14,(short)uStack_10);
    call_three_init_helpers_10392d02(param_1);
    request_ui_sync_code_4(*(void **)((int)param_1 + 8));
    get_or_create_sram_object_1040a240();
    init_object_flag_and_subobj(__frv_reg_unset(4));
  }
  return;
}
