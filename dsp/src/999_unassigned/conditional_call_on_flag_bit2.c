/* @k10d conditional_call_on_flag_bit2 @ 0x000e52aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls FUN_000cdeb8 if bit 2 of DAT_0003c07f is set.
 * summary:
 *   Checks bit 2 (value 4) of the global byte DAT_0003c07f. If set, invokes the single
 *   callee FUN_000cdeb8 and returns. No other side effects or arguments are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void conditional_call_on_flag_bit2(void)

{
  if ((DAT_0003c07f & 4) != 0) {
    FUN_000cdeb8();
  }
  return;
}
