/* @k10d FUN_000d539c @ 0x000d539c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000d539c(void)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  compute_signed_delta_and_store();
  DAT_0003cbb7 = DAT_0003cbb7 & 0xdf;
  accumulate_signed_delta();
  if ((DAT_0003ce00 & 1) != 0) {
    accumulate_dat_0003cbf0();
  }
  accumulate_signed_offset_adjustments();
  if (((DAT_0003ce01 & 0x20) != 0) && ((DAT_0003cbd3 & 0x10) != 0)) {
    accumulate_signed_offset();
  }
  compute_signed_product_with_offset();
  if (((DAT_0003cb80 & 0x40) == 0) &&
     (((((DAT_0003ce06 & 8) != 0 || ((DAT_0003cbd3 & 0xf) == 0)) ||
       (((DAT_0003cbd3 & 0xf) < 3 && ((DAT_0003cb80 & 2) != 0)))) ||
      (((2 < (DAT_0003cbd3 & 0xf) && ((DAT_0003cb80 & 2) != 0)) &&
       ((ushort)((ushort)DAT_0003f1bb * 2) <= _DAT_0003ccd4)))))) {
    DAT_0003cb80 = DAT_0003cb80 | 1;
    uVar1 = 3;
  }
  return uVar1;
}
