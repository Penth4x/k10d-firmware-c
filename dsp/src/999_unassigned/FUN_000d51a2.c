/* @k10d FUN_000d51a2 @ 0x000d51a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000d51a2(void)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  update_two_pointer_pairs();
  accumulate_flag_based_offset();
  update_status_bits_from_flags();
  DAT_0003cbb6 = DAT_0003cb9b;
  if ((DAT_0003cb9b & 0x20) == 0) {
    uVar1 = sum_four_dat_words();
    _DAT_0003ccc0 = (uint16_t)(uVar1 >> 1);
    if (((DAT_0003ce00 & 0x40) == 0) || ('\0' < DAT_0003cfc7)) {
      DAT_0003cbd4 = DAT_0003cbd4 & 0x7f;
    }
    compute_max_pair_diff();
    if (((DAT_0003cbd4 & 2) != 0) || ((DAT_0003cbd4 & 0x80) != 0)) {
      DAT_0003cbd4 = DAT_0003cbd4 & 0xfd;
      find_max_pairwise_diff_index();
      if ((int)((uint)_DAT_0003ccd8 - (uint)DAT_0003f422) < (int)(uint)_DAT_0003ccda) {
        DAT_0003ccd6 = DAT_0003ccd7;
      }
    }
    clamp_and_store_byte_000d2730();
    uVar2 = 0;
  }
  return uVar2;
}
