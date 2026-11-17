/* @k10d call_two_init_helpers_100f181c @ 0x100f181c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with fixed arguments 1 and 0x10.
 * summary:
 *   The function makes two sequential calls: set_bit_2_in_dat_800482d4_100f1ec6(1) and
 *   store_halfword_at_dat_offset(0x10). No local state is modified and no return value is
 *   used. The specific roles of the callees are unknown, so the behavior is described
 *   mechanically as invoking two initialization or configuration routines with constant
 *   parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_init_helpers_100f181c(void)

{
  set_bit_2_in_dat_800482d4_100f1ec6(1);
  store_halfword_at_dat_offset(0x10);
  return;
}
