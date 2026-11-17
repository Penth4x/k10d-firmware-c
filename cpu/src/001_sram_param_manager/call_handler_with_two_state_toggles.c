/* @k10d call_handler_with_two_state_toggles @ 0x100f170c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a handler function between two calls to a state-setting function with arguments
 *   0 and 1.
 * summary:
 *   The function calls set_bit_2_in_dat_800482d4_100f1d40 with argument 0, then calls
 *   select_divisor_for_limit with the input parameter, and finally calls
 *   set_bit_2_in_dat_800482d4_100f1d40 with argument 1. This pattern suggests setting a
 *   state to 0, performing an operation, and then setting the state to 1, possibly for
 *   disabling/enabling interrupts or a similar mechanism. The specific roles of the callees
 *   are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_handler_with_two_state_toggles(uint32_t param_1)

{
  set_bit_2_in_dat_800482d4_100f1d40(0);
  select_divisor_for_limit(param_1);
  set_bit_2_in_dat_800482d4_100f1d40(1);
  return;
}
