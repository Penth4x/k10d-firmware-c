/* @k10d FUN_000f040e @ 0x000f040e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f040e(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    if (((DAT_0003c330 & 2) != 0) || ((DAT_0003c330 & 4) != 0)) {
      if ((DAT_0003c330 & 0x10) == 0) {
        DAT_0003c330 = DAT_0003c330 & 0xf9;
      }
      bVar1 = true;
    }
    call_subroutine_with_0x40();
    if (bVar1) {
      call_d5afc_with_0x79();
    }
    if ((DAT_0003c02f & 1) != 0) {
      if (DAT_0003c060 == '\x02') {
        DAT_0003c064 = 1;
      }
      else {
        DAT_0003c065 = 1;
      }
      DAT_0003c067 = DAT_0003c067 | 2;
      DAT_0003c072 = 0;
      DAT_0003c073 = 0;
      DAT_0003c074 = 0;
      FUN_000d5ff0();
    }
  }
  else {
    DAT_0003c330 = DAT_0003c330 & 200;
    DAT_0003c038 = DAT_0003c038 & 0xfb;
  }
  return;
}
