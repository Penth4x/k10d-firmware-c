/* @k10d FUN_000e06f6 @ 0x000e06f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint FUN_000e06f6(void)

{
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    if ((DAT_0003c02f & 1) == 0) {
      poll_byte_until_change();
      if ((DAT_00000008 & 2) == 0) {
        if ((DAT_0003f3f2 & 2) == 0) {
          dispatch_on_state_flags_000e223e();
        }
      }
      else if ((DAT_00000008 & 4) != 0) {
        clear_flag_bit1_in_global();
      }
    }
    else {
      clear_flag_bit1_in_global();
    }
  }
  return (DAT_00000008 & 3) >> 1;
}
