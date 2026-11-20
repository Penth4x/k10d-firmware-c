/* @k10d update_buffer_state_flags @ 0x000ccac6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a 16-bit state word based on buffer head/tail pointers and calls a handler if a
 *   condition is met.
 * summary:
 *   The function checks a flag in DAT_0003ce01 and compares two 16-bit values (DAT_0003ce24
 *   and DAT_0003ce28) that resemble buffer indices. It sets or clears specific bits in
 *   DAT_0003ce03 (a state/flags word) depending on the relationship between these values.
 *   If a specific condition involving the indices and flags is true, it sets bit 3 and
 *   calls compute_clamped_delta; otherwise, it calls clear_flag_if_check_zero and clears
 *   bit 3. Finally, it clears bit 2 or bit 4 based on whether the second index is less than
 *   the first.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_buffer_state_flags(void)

{
  byte bVar1;
  
  if ((DAT_0003ce01 & 2) == 0) {
    if ((((_DAT_0003ce24 < 0x500) && ((DAT_0003ce03 & 0x20) == 0)) &&
        ((_DAT_0003ce24 >> 8 != 2 ||
         (((DAT_0003ce03 & 0x20) == 0 && ((uint)_DAT_0003ce28 < _DAT_0003ce24 + 0x80)))))) &&
       ((DAT_0003ce03 & 8) == 0)) {
      DAT_0003ce03 = DAT_0003ce03 | 8;
      compute_clamped_delta();
      return;
    }
    clear_flag_if_check_zero();
    DAT_0003ce03 = DAT_0003ce03 & 0xdf;
  }
  bVar1 = DAT_0003ce03 & 0xf7;
  if (_DAT_0003ce28 < _DAT_0003ce24) {
    bVar1 = DAT_0003ce03 & 0xd7;
  }
  DAT_0003ce03 = bVar1;
  return;
}
