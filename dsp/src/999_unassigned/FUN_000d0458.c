/* @k10d FUN_000d0458 @ 0x000d0458
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000d0458(void)

{
  int iVar1;
  
  iVar1 = poll_event_and_dispatch_000cbe84(0x11,1);
  while( true ) {
    if (iVar1 != 0) {
      return 0;
    }
    if (DAT_0003ce17 == '\0') break;
    iVar1 = poll_event_and_dispatch_000cbe84(0x11,1);
  }
  DAT_0003ce08 = DAT_0003ce08 & 0xfd;
  FUN_000d04ba(1);
  if ((DAT_0003c18d & 0x40) == 0) {
    DAT_0003c180 = DAT_0003c180 & 0xf7;
    DAT_0003ce01 = DAT_0003ce01 & 0x7f;
    DAT_0003ce10 = 1;
    return 0;
  }
  DAT_0003ce01 = DAT_0003ce01 | 0x20;
  return 0x10;
}
