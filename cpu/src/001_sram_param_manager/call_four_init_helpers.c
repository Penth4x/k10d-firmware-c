/* @k10d call_four_init_helpers @ 0x100f1862
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes four helper functions with fixed integer arguments in sequence.
 * summary:
 *   The function makes five sequential calls to four distinct helpers:
 *   set_bit_2_in_dat_800482d4_100f1ec6(1), set_bit1_in_dat_800482d4_100f1eec(1),
 *   set_status_code_based_on_checks(0), and store_halfword_at_dat_offset called twice with
 *   arguments 2 and 1. No local state is modified or returned. The specific roles of the
 *   callees are unknown, so the overall subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_init_helpers(void)

{
  set_bit_2_in_dat_800482d4_100f1ec6(1);
  set_bit1_in_dat_800482d4_100f1eec(1);
  set_status_code_based_on_checks(0);
  store_halfword_at_dat_offset(2);
  store_halfword_at_dat_offset(1);
  return;
}
