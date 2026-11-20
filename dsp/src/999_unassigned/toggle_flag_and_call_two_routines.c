/* @k10d toggle_flag_and_call_two_routines @ 0x000c1ffa
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   If a bit in DAT_0003c193 is set, sets bit 0 of DAT_0003c588, calls two routines, then
 *   clears bit 0 of DAT_0003c588.
 * summary:
 *   Checks bit 0 of DAT_0003c193. When set, it sets bit 0 of DAT_0003c588, invokes
 *   reset_flag_after_call and FUN_000c209e, then clears bit 0 of DAT_0003c588. The two
 *   callees have no verified names, so their specific roles are unknown. The function acts
 *   as a guarded wrapper around the two calls, using DAT_0003c588 bit 0 as a temporary
 *   flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_and_call_two_routines(void)

{
  if ((DAT_0003c193 & 1) != 0) {
    DAT_0003c588 = DAT_0003c588 | 1;
    reset_flag_after_call();
    FUN_000c209e();
    DAT_0003c588 = DAT_0003c588 & 0xfe;
  }
  return;
}
