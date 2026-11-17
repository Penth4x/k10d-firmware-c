/* @k10d call_two_init_helpers_100f1838 @ 0x100f1838
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with fixed integer arguments 1 and 4.
 * summary:
 *   The function makes two sequential calls: set_bit1_in_dat_800482d4_100f1eec with
 *   argument 1 and store_halfword_at_dat_offset with argument 4. No local state is modified
 *   and no return value is produced. The specific roles of the callees are unknown, so the
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_init_helpers_100f1838(void)

{
  set_bit1_in_dat_800482d4_100f1eec(1);
  store_halfword_at_dat_offset(4);
  return;
}
