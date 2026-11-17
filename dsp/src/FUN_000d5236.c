/* @k10d FUN_000d5236 @ 0x000d5236
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000d5236(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((((DAT_0003ce01 & 0x20) == 0) || ((DAT_0003f259 & 2) != 0)) && ((DAT_0003f258 & 4) != 0)) {
    compute_four_derived_values();
    accumulate_flag_based_offset();
    update_status_bits_from_flags();
    if ((DAT_0003cb9b & 0x20) == 0) {
      _DAT_0003ccc2 = sum_four_dat_words();
      if ((DAT_0003f258 & 8) != 0) {
        if (_DAT_0003ccc2 < _DAT_0003ccc0) {
          uVar1 = FUN_000d52b4();
        }
        else {
          DAT_0003cbb7 = DAT_0003cbb7 | 8;
          rotate_short_array_in_place((void *)_DAT_0003cc88);
          rotate_short_array_in_place((void *)_DAT_0003cc8c);
        }
      }
    }
    else {
      uVar1 = FUN_000d52b4();
    }
  }
  return uVar1;
}
