/* @k10d run_nine_step_init_sequence @ 0x100f0b7a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Clears bit 23 of a global and calls nine helper functions with fixed parameters in a
 *   fixed order.
 * summary:
 *   The function calls set_flag_and_halt(200), clears bit 23 of _DAT_6b000004, then invokes
 *   set_bit_in_dat_800482d4_100f1eaa(1), select_divisor_for_limit(400),
 *   toggle_two_subsystems_on_param(1), set_status_code_based_on_checks(1),
 *   set_bit1_in_dat_800482d4_100f1d98(0), call_handler_with_two_state_toggles(400),
 *   find_first_divisor_threshold(), and clear_two_bitmasks(0x1f7,0x1ff). The roles of the
 *   callees are unknown, so the subsystem is not identified; the pattern is a fixed-order
 *   initialization or reset sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t run_nine_step_init_sequence(void)

{
  set_flag_and_halt(200);
  _DAT_6b000004 = _DAT_6b000004 & 0xfdffffff;
  set_bit_in_dat_800482d4_100f1eaa(1);
  select_divisor_for_limit(400);
  toggle_two_subsystems_on_param(1);
  set_status_code_based_on_checks(1);
  set_bit1_in_dat_800482d4_100f1d98(0);
  call_handler_with_two_state_toggles(400);
  find_first_divisor_threshold();
  clear_two_bitmasks(0x1f7,0x1ff);
  return 0;
}
