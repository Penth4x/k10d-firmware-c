/* @k10d copy_or_compute_state_word @ 0x000c3a4c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies a source value to a destination, optionally replacing it with a computed result
 *   if a flag bit is set.
 * summary:
 *   The function unconditionally assigns DAT_0003c480 to DAT_0003c565 and DAT_0003c571 to
 *   DAT_0003c564. If bit 3 of DAT_0003c127 is set, it calls
 *   clamp_value_and_set_flags_000c6682 with three arguments and overwrites DAT_0003c564
 *   with the return value. The specific roles of the data globals and the callee are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_or_compute_state_word(void)

{
  DAT_0003c565 = DAT_0003c480;
  DAT_0003c564 = DAT_0003c571;
  if ((DAT_0003c127 & 8) != 0) {
    DAT_0003c564 = clamp_value_and_set_flags_000c6682(DAT_0003c480,DAT_0003c570,DAT_0003c571);
  }
  return;
}
