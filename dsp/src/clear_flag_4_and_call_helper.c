/* @k10d clear_flag_4_and_call_helper @ 0x000e89ec
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   If bit 4 of DAT_0003c021 is set, calls update_bit7_from_dat_0003c00f, zeroes
 *   DAT_0003c024, and clears bits 4 and 6 of DAT_0003c021/0003c022.
 * summary:
 *   Checks bit 4 (0x10) of the byte at DAT_0003c021. When set, it invokes the single callee
 *   update_bit7_from_dat_0003c00f, then resets the word at DAT_0003c024 to 0, masks
 *   DAT_0003c022 with 0xbf (clearing bit 6), and masks DAT_0003c021 with 0xef (clearing bit
 *   4). The DAT_0003c02x globals are unknown state/flag words; no MMIO or named subsystem
 *   is touched. Role is limited to this flag-clearing sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_flag_4_and_call_helper(void)

{
  if ((DAT_0003c021 & 0x10) != 0) {
    update_bit7_from_dat_0003c00f();
    _DAT_0003c024 = 0;
    DAT_0003c022 = DAT_0003c022 & 0xbf;
    DAT_0003c021 = DAT_0003c021 & 0xef;
  }
  return;
}
