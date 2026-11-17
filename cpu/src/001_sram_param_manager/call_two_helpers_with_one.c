/* @k10d call_two_helpers_with_one @ 0x100f1854
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, each passing the constant 1 as an argument.
 * summary:
 *   The function makes two sequential calls: set_bit1_in_dat_800482d4_100f1eec(1) followed
 *   by store_halfword_at_dat_offset(1). It has no local variables, no return value, and no
 *   other logic. The specific roles of the callees are unknown, so the camera subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_one(void)

{
  set_bit1_in_dat_800482d4_100f1eec(1);
  store_halfword_at_dat_offset(1);
  return;
}
