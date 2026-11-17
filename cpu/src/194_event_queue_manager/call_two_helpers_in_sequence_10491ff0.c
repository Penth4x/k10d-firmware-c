/* @k10d call_two_helpers_in_sequence_10491ff0 @ 0x10491ff0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_or_init_sram_block_1052b6fc, passes its result to
 *   call_single_helper_on_param, and returns the second helper's value.
 * summary:
 *   The function performs a two-step operation: it invokes get_or_init_sram_block_1052b6fc
 *   to obtain a pointer or value, then immediately passes that result as the sole argument
 *   to call_single_helper_on_param. The return value of call_single_helper_on_param is
 *   propagated back to the caller. No other logic, branching, or memory operations are
 *   present in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_in_sequence_10491ff0(void)

{
  uint32_t *puVar1;
  uint32_t extraout_r4;
  
  puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
  call_single_helper_on_param(puVar1);
  return extraout_r4;
}
