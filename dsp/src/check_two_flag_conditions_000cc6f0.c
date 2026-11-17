/* @k10d check_two_flag_conditions_000cc6f0 @ 0x000cc6f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Tests two byte flags and calls a handler if both conditions are met.
 * summary:
 *   Reads DAT_0003ce03 and DAT_0003ce01. If bit 7 of the first byte is set, its low 2 bits
 *   are non-zero, and the low 3 bits of the second byte are either 1 or 7, it calls
 *   clear_flag_if_check_zero. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_two_flag_conditions_000cc6f0(void)

{
  if ((((DAT_0003ce03 & 0x80) != 0) && ((DAT_0003ce03 & 3) != 0)) &&
     (((DAT_0003ce01 & 7) == 1 || ((DAT_0003ce01 & 7) == 7)))) {
    clear_flag_if_check_zero();
  }
  return;
}
