/* @k10d FUN_000e03e8 @ 0x000e03e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e03e8(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (((((DAT_0003c127 & 0x20) != 0) && ((DAT_0003c128 & 0x80) != 0)) &&
      ((DAT_0003c12c & 0x20) != 0)) && (iVar2 = check_and_dispatch_state_flags(), iVar2 == 1)) {
    dispatch_event_if_enabled_000e155a(0x93,(int)&DAT_0003c13c,1);
    bVar1 = true;
  }
  if (bVar1) {
    wait_for_status_bit_clear_000e042c();
  }
  return;
}
