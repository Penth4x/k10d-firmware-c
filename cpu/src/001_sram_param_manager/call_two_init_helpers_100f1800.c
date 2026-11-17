/* @k10d call_two_init_helpers_100f1800 @ 0x100f1800
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with fixed arguments 1 and 0x40.
 * summary:
 *   The function makes two sequential calls: set_bit_2_in_dat_800482d4_100f1ec6 with
 *   argument 1, then store_halfword_at_dat_offset with argument 0x40. No local state is
 *   modified and no return value is produced. The specific subsystem roles of the callees
 *   are not established from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_init_helpers_100f1800(void)

{
  set_bit_2_in_dat_800482d4_100f1ec6(1);
  store_halfword_at_dat_offset(0x40);
  return;
}
