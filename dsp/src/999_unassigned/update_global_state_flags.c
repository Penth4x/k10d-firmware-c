/* @k10d update_global_state_flags @ 0x000de3ce
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Updates multiple global flag variables and calls helper functions based on the input
 *   parameter and current state.
 * summary:
 *   The function calls unsigned_divide with an offset from param_1, then invokes two
 *   unnamed helpers. It modifies several global flag variables (DAT_0003c804, DAT_0003f55e,
 *   DAT_0003c07e) based on bit tests. Depending on the value of DAT_0003c8c8, it either
 *   calls update_status_flags_and_counters_000de274 or sets DAT_0003c800 to one of three
 *   values (0x42, 0x22, 0x82) and calls dispatch_state_machine_000de49c. Finally, it clears
 *   several other global variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_global_state_flags(int param_1)

{
  _DAT_0003c884 = unsigned_divide(param_1 + 500,1000);
  increment_capped_counter();
  toggle_bit6_based_on_counter();
  if ((DAT_0003c804 & 2) == 0) {
    DAT_0003c804 = DAT_0003c804 | 2;
    if ((DAT_0003f55e & 8) == 0) {
      DAT_0003f55e = DAT_0003f55e & 0xcf;
    }
    else {
      DAT_0003f55e = DAT_0003f55e | 0x10;
      DAT_0003c07e = DAT_0003c07e | 0x40;
    }
  }
  if (DAT_0003c8c8 == '\x01') {
    update_status_flags_and_counters_000de274(param_1);
  }
  else {
    if ((DAT_0003f55e & 0x10) == 0) {
      DAT_0003c800 = 0x42;
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
  }
  DAT_0003f55f = 0;
  DAT_0003f54e = 0;
  DAT_0003c80f = DAT_0003c80f & 0xf;
  return;
}
