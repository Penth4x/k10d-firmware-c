/* @k10d process_event_and_cleanup @ 0x10392c56
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event via a helper and performs cleanup if the helper succeeds.
 * summary:
 *   The function calls forward_three_args_to_helper_10394a5e with the input parameter and
 *   three stack-allocated output variables (initialized to 0). If
 *   forward_three_args_to_helper_10394a5e returns 0 (success), it calls
 *   set_three_fields_at_offset_c with the input and the three output values, then calls
 *   call_three_init_helpers_10392d02, request_ui_sync_code_4 (with a pointer from offset 8
 *   of the input), get_or_create_sram_object_1040a240, and init_object_flag_and_subobj. The
 *   specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_event_and_cleanup(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_14;
  uint32_t uStack_10;
  byte bStack_9;
  
  bStack_9 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = forward_three_args_to_helper_10394a5e(param_1,&bStack_9,&uStack_14,&uStack_10);
  if (iVar1 != 0) {
    set_three_fields_at_offset_c(param_1,(uint)bStack_9,(short)uStack_14,(short)uStack_10);
    call_three_init_helpers_10392d02(param_1);
    request_ui_sync_code_4(*(void **)((int)param_1 + 8));
    get_or_create_sram_object_1040a240();
    init_object_flag_and_subobj(__frv_reg_unset(4));
  }
  return;
}
