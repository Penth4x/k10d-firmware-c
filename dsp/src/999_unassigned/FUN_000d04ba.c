/* @k10d FUN_000d04ba @ 0x000d04ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000d04ba(int param_1)

{
  DAT_0003c180 = DAT_0003c180 & 0xf7;
  DAT_0003c186 = DAT_0003c186 & 0x3f;
  if (param_1 != 0) {
    DAT_0003c180 = DAT_0003c180 | 8;
    if ((DAT_0003cbd2 & 0x10) != 0) {
      DAT_0003c186 = DAT_0003c186 | 0x40;
    }
    if ((DAT_0003cbd2 & 0x20) != 0) {
      DAT_0003c186 = DAT_0003c186 | 0x80;
    }
  }
  call_subroutine_with_arg_5();
  DAT_000000d1 = DAT_000000d1 & 0xfe;
  DAT_000000f6 = DAT_000000f6 & 0x7f;
  FUN_000d9e2c();
  clear_state_flags_and_dispatch();
  DAT_000000d1 = DAT_000000d1 | 1;
  DAT_000000f6 = DAT_000000f6 | 0x80;
  return;
}
