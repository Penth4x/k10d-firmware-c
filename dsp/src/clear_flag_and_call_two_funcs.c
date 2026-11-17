/* @k10d clear_flag_and_call_two_funcs @ 0x000f127c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   If bit 7 of DAT_0003c338 is set, calls FUN_000f1dfc, clears bit 7, then calls
 *   FUN_000d6388.
 * summary:
 *   Checks bit 7 (0x80) of the global DAT_0003c338. When set, it invokes FUN_000f1dfc,
 *   masks off bit 7 from DAT_0003c338, and then invokes FUN_000d6388. No other side effects
 *   are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_two_funcs(void)

{
  if ((DAT_0003c338 & 0x80) != 0) {
    FUN_000f1dfc();
    DAT_0003c338 = DAT_0003c338 & 0x7f;
    FUN_000d6388();
  }
  return;
}
