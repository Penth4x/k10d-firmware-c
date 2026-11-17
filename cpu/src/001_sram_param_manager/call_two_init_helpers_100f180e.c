/* @k10d call_two_init_helpers_100f180e @ 0x100f180e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with fixed arguments 1 and 0x20.
 * summary:
 *   The function makes two sequential calls: set_bit_2_in_dat_800482d4_100f1ec6(1) and
 *   store_halfword_at_dat_offset(0x20). No local state is modified and no return value is
 *   used. The specific roles of the callees are unknown, so the behavior is described
 *   mechanically as invoking two initialization-like helpers with constant parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_init_helpers_100f180e(void)

{
  set_bit_2_in_dat_800482d4_100f1ec6(1);
  store_halfword_at_dat_offset(0x20);
  return;
}
