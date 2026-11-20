/* @k10d update_status_flags_and_counters_000de274 @ 0x000de274
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a set of global status flags and counters based on threshold comparisons and
 *   bit tests.
 * summary:
 *   The function calls unsigned_divide with an offset from param_1, then invokes
 *   increment_capped_counter and toggle_bit6_based_on_counter. It manipulates bits in
 *   DAT_0003c804 and DAT_0003c80f, and increments counters DAT_0003f55f and DAT_0003f54e if
 *   they are below thresholds stored in DAT_0003f3bd, DAT_0003f3bc, DAT_0003f3be, and
 *   DAT_0003f3bf. It also updates DAT_0003c800 based on DAT_0003c80e and DAT_0003f368, and
 *   calls clear_seven_byte_block and dispatch_state_machine_000de49c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_flags_and_counters_000de274(int param_1)

{
  byte bVar1;
  
  _DAT_0003c884 = unsigned_divide(param_1 + 500,1000);
  increment_capped_counter();
  toggle_bit6_based_on_counter();
  DAT_0003f55e = DAT_0003f55e | 1;
  bVar1 = DAT_0003c804 | 4;
  if (_DAT_0003c89e < 10) {
    bVar1 = DAT_0003c804 & 0xfb;
  }
  DAT_0003c804 = bVar1;
  if (_DAT_0003c89e != 0xffff) {
    _DAT_0003c89e = _DAT_0003c89e + 1;
  }
  if ((DAT_0003c1ed & 2) == 0) {
    DAT_0003f55f = 0;
    DAT_0003c80f = DAT_0003c80f & 0xdf;
  }
  else if (DAT_0003f3bd < DAT_0003f55f) {
    DAT_0003c80f = DAT_0003c80f & 0xdf;
  }
  else {
    DAT_0003f55f = DAT_0003f55f + 1;
    if (DAT_0003f3bc <= DAT_0003f55f) {
      DAT_0003c80f = DAT_0003c80f | 0x20;
    }
  }
  if ((DAT_00000002 & 1) == 0) {
    if (DAT_0003f3bf < DAT_0003f54e) {
      DAT_0003c80f = DAT_0003c80f & 0xef;
    }
    else {
      DAT_0003f54e = DAT_0003f54e + 1;
      if (DAT_0003f3be < DAT_0003f54e) {
        DAT_0003c80f = DAT_0003c80f | 0x10;
      }
    }
  }
  else {
    DAT_0003f54e = 0;
    DAT_0003c80f = DAT_0003c80f & 0xef;
  }
  if (DAT_0003f368 < DAT_0003c80e) {
    if ((DAT_0003c804 & 1) == 0) {
      DAT_0003c800 = 0x12;
    }
    else {
      DAT_0003c800 = 0x82;
    }
  }
  else {
    DAT_0003c80e = DAT_0003c80e + 1;
    DAT_0003c800 = 0x82;
    clear_seven_byte_block();
  }
  if ((DAT_0003c804 & 0x20) == 0) {
    DAT_0003c800 = DAT_0003c800 & 0xf9 | 1;
  }
  dispatch_state_machine_000de49c();
  DAT_0003f55e = DAT_0003f55e & 0xfe;
  DAT_0003c804 = DAT_0003c804 & 0xf9;
  return;
}
