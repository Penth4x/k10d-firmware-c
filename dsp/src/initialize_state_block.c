/* @k10d initialize_state_block @ 0x000de17e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Initializes a block of state variables and calls setup routines based on a mode flag.
 * summary:
 *   The function calls unsigned_divide with an offset from param_1 and stores the result in
 *   DAT_0003c884. It then calls two initialization functions (increment_capped_counter,
 *   toggle_bit6_based_on_counter) and clears DAT_0003c89e. Depending on the value of
 *   DAT_0003c8c8, it either calls update_status_flags_and_counters_000de274 or performs a
 *   series of state updates involving bit manipulations on DAT_0003c80f and DAT_0003c800,
 *   followed by calls to clamp_and_store_short_value, compute_scaled_values,
 *   toggle_bit0_from_bit1, dispatch_state_machine_000de49c, and
 *   copy_three_words_if_flag_clear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_state_block(int param_1)

{
  _DAT_0003c884 = unsigned_divide(param_1 + 500,1000);
  increment_capped_counter();
  toggle_bit6_based_on_counter();
  _DAT_0003c89e = 0;
  if (DAT_0003c8c8 == '\x01') {
    update_status_flags_and_counters_000de274(param_1);
  }
  else {
    _DAT_0003c80c = _DAT_0003c806;
    clamp_and_store_short_value();
    if ((DAT_0003c396 & 0x80) != 0) {
      _DAT_0003c808 = 100;
    }
    DAT_0003c80f = DAT_0003c80f & 0xfc | DAT_0003c3a5 & 3;
    compute_scaled_values();
    DAT_0003c80e = 0;
    toggle_bit0_from_bit1();
    if ((DAT_0003f55e & 0x10) == 0) {
      DAT_0003c800 = 2;
    }
    else if (((DAT_0003c394 & 1) == 0) && ((DAT_0003c07e & 0x40) == 0)) {
      DAT_0003c800 = 0x22;
    }
    else {
      DAT_0003c800 = 0x82;
    }
    if ((DAT_0003c804 & 0x20) == 0) {
      DAT_0003c800 = DAT_0003c800 & 0xfd | 1;
    }
    dispatch_state_machine_000de49c();
    copy_three_words_if_flag_clear();
  }
  return;
}
