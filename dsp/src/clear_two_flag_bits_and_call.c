/* @k10d clear_two_flag_bits_and_call @ 0x000d58fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   If a global flag is clear, clears bits 5 and 6 of a second global and calls two
 *   functions for each set bit.
 * summary:
 *   Checks DAT_0003c333 bit 0; if clear, tests DAT_0003c337 bits 5 (0x20) and 6 (0x40). For
 *   each set bit it clears that bit in DAT_0003c337 and calls call_d5afc_with_0xa5 or
 *   FUN_000d62a2 respectively. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_flag_bits_and_call(void)

{
  if ((DAT_0003c333 & 1) == 0) {
    if ((DAT_0003c337 & 0x20) != 0) {
      DAT_0003c337 = DAT_0003c337 & 0xdf;
      call_d5afc_with_0xa5();
    }
    if ((DAT_0003c337 & 0x40) != 0) {
      DAT_0003c337 = DAT_0003c337 & 0xbf;
      FUN_000d62a2();
    }
  }
  return;
}
