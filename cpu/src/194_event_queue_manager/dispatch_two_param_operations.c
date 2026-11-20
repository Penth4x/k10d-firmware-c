/* @k10d dispatch_two_param_operations @ 0x104916ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Performs a conditional two-argument operation followed by per-element cleanup on a two-
 *   element array.
 * summary:
 *   If param_2 is non-zero, it calls get_or_init_sram_block_1052b6fc and
 *   call_single_helper_on_param; if the result is zero, it calls run_sr_state_machine with
 *   values derived from param_1[0] and param_1[1] via select_channel_by_index. Otherwise,
 *   it calls call_three_helpers_on_struct_1052b9b2 and
 *   call_three_helpers_on_struct_1052b9e4 separately for each element. Finally, it calls
 *   toggle_three_state_value on both elements and
 *   invoke_virtual_slot_on_two_objects_104916b6 on the array pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_param_operations(uint32_t *param_1,int param_2)

{
  uint32_t *puVar1;
  int extraout_r4;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  if (param_2 != 0) {
    puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
    call_single_helper_on_param(puVar1);
    if (extraout_r4 == 0) {
      uVar2 = get_or_init_sram_block_1052b6fc();
      uVar3 = select_channel_by_index((uint32_t *)(param_1[1]));
      uVar4 = select_channel_by_index((uint32_t *)(*param_1));
      run_sr_state_machine((int *)(uVar2),(uint32_t)(uVar3),(uint32_t)(uVar4));
      goto LAB_10491780;
    }
  }
  uVar2 = get_or_init_sram_block_1052b6fc();
  uVar3 = select_channel_by_index((uint32_t *)(*param_1));
  call_three_helpers_on_struct_1052b9b2((uint32_t *)(uVar2),(uint32_t)(uVar3));
  uVar2 = get_or_init_sram_block_1052b6fc();
  uVar3 = select_channel_by_index((uint32_t *)(param_1[1]));
  call_three_helpers_on_struct_1052b9e4((int *)(uVar2),(uint32_t)(uVar3));
LAB_10491780:
  toggle_three_state_value(*param_1);
  toggle_three_state_value(param_1[1]);
  invoke_virtual_slot_on_two_objects_104916b6(param_1);
  return;
}
