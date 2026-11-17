/* @k10d call_two_init_routines_100f1846 @ 0x100f1846
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with constant arguments 1 and 2 in sequence.
 * summary:
 *   The function has no local logic and simply calls set_bit1_in_dat_800482d4_100f1eec with
 *   argument 1, then calls store_halfword_at_dat_offset with argument 2. The roles of the
 *   callees are unknown, so the specific subsystem cannot be determined. It is called from
 *   dispatch_nine_bit_flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_init_routines_100f1846(void)

{
  set_bit1_in_dat_800482d4_100f1eec(1);
  store_halfword_at_dat_offset(2);
  return;
}
