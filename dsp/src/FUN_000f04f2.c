/* @k10d FUN_000f04f2 @ 0x000f04f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f04f2(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    call_subroutine_with_0x40();
    FUN_000d5fbe();
  }
  return;
}
