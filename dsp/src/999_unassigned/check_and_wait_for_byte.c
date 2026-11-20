/* @k10d check_and_wait_for_byte @ 0x000e1ecc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a byte against a bitmask and waits for a flag to clear while calling a helper.
 * summary:
 *   The function first checks if param_1 is within a specific range (0x74-0x7a) or if
 *   certain bits in DAT_0003c127 and DAT_0003c128 are set. If the check passes, it calls
 *   empty_stub_000e2100 and FUN_000e2102, then enters a loop that calls
 *   increment_counter_and_flag with an incrementing parameter until param_3 is zero or
 *   DAT_0003c122 is non-zero. Finally, it calls FUN_000e16d8 and returns the value of
 *   DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char check_and_wait_for_byte(uint param_1,int param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_0003c127 & 0x80) != 0) {
    if ((param_1 < 0x74) || (0x7a < param_1)) {
      bVar1 = true;
    }
    else if (param_1 < 0x78) {
      bVar1 = (DAT_0003c128 & 0x40) != 0;
    }
    else if ((DAT_0003c128 & 0x80) != 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    empty_stub_000e2100();
    FUN_000e2102(param_1 & 0xff);
    while ((param_3 != 0 && (DAT_0003c122 == '\0'))) {
      increment_counter_and_flag((void *)(uint)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 - 1 & 0xffff;
    }
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
