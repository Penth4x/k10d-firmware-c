/* @k10d toggle_flag_via_callback @ 0x000c75b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Toggles bit 3 of DAT_0003c4d5 and invokes a function pointer from a table when the
 *   condition is met.
 * summary:
 *   The function checks bit 1 of DAT_0003c035. If clear, it checks bit 3 of DAT_0003c4d5;
 *   if that is also clear, it sets bit 3 and calls a function pointer indexed by
 *   DAT_0003c49b from the table at PTR_LAB_000fa130 with argument 0. If bit 1 of
 *   DAT_0003c035 is set, it clears bit 3 of DAT_0003c4d5. No other side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_via_callback(void)

{
  if ((DAT_0003c035 & 2) == 0) {
    if ((DAT_0003c4d5 & 8) == 0) {
      DAT_0003c4d5 = DAT_0003c4d5 | 8;
      (*(code *)(&PTR_LAB_000fa130)[DAT_0003c49b])(0);
    }
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 & 0xf7;
  }
  return;
}
