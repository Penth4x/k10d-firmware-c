/* @k10d FUN_000cdfe8 @ 0x000cdfe8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000cdfe8(void)

{
  int iVar1;
  
  iVar1 = evaluate_state_flag_condition();
  if (-1 < iVar1) {
    if ((DAT_0003ce00 & 0x40) == 0) {
      iVar1 = read_bits_4_to_6_of_dat_0003c037();
      if (iVar1 == 0) {
        DAT_0003ce06 = DAT_0003ce06 & 0x7f;
      }
    }
    else {
      iVar1 = compute_and_dispatch_flag();
      if (iVar1 == 0) {
        iVar1 = read_bits_4_to_6_of_dat_0003c037();
        if (iVar1 != 0) {
          FUN_000cdaa4();
          set_flag_bits_in_dat_0003ce00();
          if ((DAT_0003ce02 & 0x80) == 0) {
            DAT_0003ce08 = DAT_0003ce08 & 0xef;
          }
          else {
            DAT_0003ce08 = DAT_0003ce08 | 0x10;
          }
          DAT_0003cbef = DAT_0003cbef & 0xf0 | DAT_0003ce2f & 0xf;
        }
        update_ce06_status_flags(0);
      }
    }
  }
  return;
}
