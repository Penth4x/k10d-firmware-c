/* @k10d FUN_000db3cc @ 0x000db3cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000db3cc(void)

{
  int iVar1;
  
  if ((DAT_0003c198 & 4) == 0) {
    if ((((DAT_0003c198 & 8) == 0) && ((DAT_0003c214 & 1) == 0)) &&
       (((DAT_0003ce62 & 2) == 0 || ((DAT_0003f50c & 0x80) != 0)))) {
      call_subroutine_with_arg_9();
      iVar1 = update_state_flags_and_dispatch();
      if (iVar1 == 1) {
        FUN_000db802();
        return;
      }
    }
    FUN_000ce05a();
    dispatch_state_transition_000db42a();
    if (((DAT_0003c198 & 8) == 0) || ((DAT_0003c198 & 4) != 0)) {
      set_flag_bit3_clear_counter();
      DAT_0003ce62 = DAT_0003ce62 & 0xfb;
    }
    else {
      FUN_000db604();
    }
  }
  else {
    clear_flag_and_reset_state();
  }
  return;
}
