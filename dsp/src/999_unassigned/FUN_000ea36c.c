/* @k10d FUN_000ea36c @ 0x000ea36c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ea36c(void)

{
  _DAT_0003c202 = 0;
  FUN_000ed7b6();
  DAT_00000002 = DAT_00000002 | 3;
  FUN_000d5642(0x14);
  initialize_timer_state_block();
  _DAT_00000056 = _DAT_00000056 & 0xfffd;
  if (DAT_0003c579 != 0xff) {
    _DAT_00000050 = DAT_0003c579 - 1;
    if (DAT_0003c579 == 0) {
      _DAT_00000050 = 0;
    }
    _DAT_00000056 = 0xd0b;
  }
  return;
}
