/* @k10d FUN_000ce4da @ 0x000ce4da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ce4da(void)

{
  if (((DAT_0003c21f ^ 0xff) & 1) == 0) {
    DAT_0003ce02 = DAT_0003ce02 & 0xfb;
  }
  else {
    DAT_0003ce02 = DAT_0003ce02 | 4;
  }
  if (_DAT_0003ce40 == 0xff) {
    clear_bit1_of_dat_0003ce01();
  }
  else {
    DAT_0003ce06 = DAT_0003ce06 | 8;
    reset_two_word_state();
  }
  if ((DAT_0003c128 & 0x40) == 0) {
    do {
      if ((DAT_0003ce01 & 7) == 0) break;
    } while ((DAT_00000001 & 1) != 0);
  }
  else {
    do {
      check_and_update_byte_flag();
      check_status_and_return_code();
      if ((DAT_0003ce01 & 7) == 0) break;
    } while ((DAT_00000001 & 1) != 0);
  }
  if (-1 < _DAT_0003ce40) {
    reset_state_flags_and_call_initializers_000cd9de();
  }
  return;
}
