/* @k10d FUN_000e45f4 @ 0x000e45f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e45f4(void)

{
  DAT_0003c07f = DAT_0003c07f & 0x7f;
  if (((((DAT_0003c00b & 0x40) == 0) && ((DAT_0003c02f & 1) == 0)) && ((DAT_0003c066 & 0x40) == 0))
     && ((((update_status_flags_000e62f4(), (DAT_0003c030 & 4) == 0 && ((DAT_0003c066 & 0x10) == 0)) &&
          ((DAT_0003c066 & 0x20) == 0)) ||
         ((((DAT_0003c030 & 4) == 0 && ((DAT_0003c066 & 0x10) != 0)) &&
          (((DAT_0003c000 & 8) != 0 && ((DAT_0003c030 & 1) == 0)))))))) {
    DAT_0003c067 = DAT_0003c067 & 0xef;
    update_status_flag_bits_000e7ade();
    if (((DAT_0003f3e1 & 0x80) == 0) && ((DAT_0003c066 & 1) != 0)) {
      configure_and_wait_status_flags();
      DAT_0003c07f = DAT_0003c07f | 0x80;
      conditional_call_sequence();
      if ((DAT_0003c020 & 0x10) != 0) {
        DAT_0000048c = 0;
      }
    }
    else {
      DAT_0003c066 = DAT_0003c066 | 2;
    }
  }
  return;
}
