/* @k10d dispatch_delayed_action @ 0x000f03ac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally invokes a no-arg routine or a timed routine based on param_1 after
 *   clearing a flag bit.
 * summary:
 *   Checks three global flag bits (DAT_0003c396 bit 4, DAT_0003f3e1 bit 6, DAT_0000004f bit
 *   2). If the first two are clear and the third is set, it clears bit 2 of DAT_0000004f.
 *   Then it branches on param_1: 1 calls set_two_byte_state_pair_000ecd94, 2 calls
 *   update_global_state_flags(2000), 3 calls update_global_state_flags(3000), otherwise
 *   calls update_global_state_flags(1000). The callees are unnamed, so the specific action
 *   (likely a delay or timer) is inferred from the integer arguments but not confirmed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_delayed_action(int param_1)

{
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0000004f & 4) != 0)) {
    DAT_0000004f = DAT_0000004f & 0xfb;
    if (param_1 == 1) {
      set_two_byte_state_pair_000ecd94();
    }
    if (param_1 == 2) {
      update_global_state_flags(2000);
    }
    else if (param_1 == 3) {
      update_global_state_flags(3000);
    }
    else {
      update_global_state_flags(1000);
    }
  }
  return;
}
