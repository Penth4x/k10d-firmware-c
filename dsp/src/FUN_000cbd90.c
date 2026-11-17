/* @k10d FUN_000cbd90 @ 0x000cbd90
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int FUN_000cbd90(void)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_condition_flag();
  iVar2 = poll_event_and_dispatch_000cbe84(6,uVar1);
  if ((iVar2 == 0) && (iVar3 = FUN_000cc3f8(), iVar3 == 0)) {
    if ((DAT_0003ce03 & 4) == 0) {
      update_nibble_and_flag_state();
    }
    if ((DAT_0003ce04 & 0x80) == 0) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = 6;
    }
  }
  return iVar3;
}
