/* @k10d dispatch_object_state_update_1036e02a @ 0x1036e02a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on an object field and conditionally calls one of three state-update
 *   routines based on a flag.
 * summary:
 *   The function first calls request_ui_sync_code_4 with the value at offset 0x14 of the
 *   object passed in param_1. It then branches on param_2: if zero, it calls
 *   init_object_with_three_calls_1052b7a2 with the result of
 *   get_or_init_sram_block_1052b6fc; otherwise, it calls dispatch_event_with_two_helpers
 *   with arguments (0xfe, 4) and call_three_helpers_on_struct_1052b72e with arguments (1,
 *   6), each preceded by a call to get_or_init_sram_block_1052b6fc. The specific roles of
 *   the callees are unknown, but the pattern suggests a state-dependent update or
 *   initialization sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_state_update_1036e02a(void *param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  
  request_ui_sync_code_4(*(void **)((int)param_1 + 0x14));
  if (param_2 == 0) {
    puVar2 = (uint32_t *)get_or_init_sram_block_1052b6fc();
    init_object_with_three_calls_1052b7a2(puVar2);
  }
  else {
    uVar1 = get_or_init_sram_block_1052b6fc();
    dispatch_event_with_two_helpers((void *)uVar1,0xfe,4);
    uVar1 = get_or_init_sram_block_1052b6fc();
    call_three_helpers_on_struct_1052b72e((void *)uVar1,1,6);
  }
  return;
}
