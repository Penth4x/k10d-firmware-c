/* @k10d branch_on_two_flag_states @ 0x000e8a14
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Selects between two callees based on a compound condition over two unknown global flag
 *   words.
 * summary:
 *   Reads DAT_0003ce00 (bits 5-7) and DAT_0003c021/0x22/0x24 to form a boolean. If the
 *   first word's upper nibble is zero AND either (bit 4 of 0x3c021 set with low two bits of
 *   0x3c024 both set) OR (bit 7 of 0x3c022 set), it calls clear_bit7_of_dat_00000006;
 *   otherwise it calls update_bit7_from_dat_0003c00f. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void branch_on_two_flag_states(void)

{
  if (((DAT_0003ce00 & 0xe0) == 0) &&
     ((((DAT_0003c021 & 0x10) != 0 && ((_DAT_0003c024 & 6) == 6)) || ((DAT_0003c022 & 0x80) != 0))))
  {
    clear_bit7_of_dat_00000006();
  }
  else {
    update_bit7_from_dat_0003c00f();
  }
  return;
}
