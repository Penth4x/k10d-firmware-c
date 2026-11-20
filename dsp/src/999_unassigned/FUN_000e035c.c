/* @k10d FUN_000e035c @ 0x000e035c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e035c(void)

{
  bool bVar1;
  
  bVar1 = false;
  if (((DAT_0003c127 & 0x20) == 0) && ((DAT_0003c127 & 0x80) == 0)) {
    if ((((DAT_0003c127 & 8) != 0) || ((DAT_0003c126 & 2) != 0)) &&
       (((DAT_0003f505 & 1) != 0 && ((DAT_0003f505 & 2) != 0)))) {
      bVar1 = true;
    }
  }
  else if ((DAT_0003f505 & 2) == 0) {
    if ((((DAT_0003f505 & 1) != 0) && ((DAT_0003c128 & 0x80) != 0)) && ((DAT_0003c128 & 4) != 0)) {
      bVar1 = true;
    }
  }
  else if (((DAT_0003c128 & 4) != 0) ||
          (((DAT_0003c127 & 0x20) != 0 && ((DAT_0003c128 & 0x80) == 0)))) {
    bVar1 = true;
  }
  if ((bVar1) && ((DAT_0003c02f & 1) == 0)) {
    if ((DAT_0003c00f & 0x40) == 0) {
      call_subroutine_with_arg_9();
      DAT_0003c1ec = DAT_0003c1ec | 2;
      update_state_flags_and_dispatch();
      DAT_0003c1ec = DAT_0003c1ec & 0xfd;
    }
    if ((DAT_0003c02f & 1) == 0) {
      run_gated_polling_loop();
    }
  }
  return;
}
