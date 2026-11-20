/* @k10d FUN_000ea526 @ 0x000ea526
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ea526(void)

{
  bool bVar1;
  
  bVar1 = false;
  write_nibble_to_ram_region(0x13);
  if ((DAT_0003c1f4 & 1) == 0) {
    if ((DAT_0003c003 & 0x40) == 0) {
      DAT_0003c1f4 = DAT_0003c1f4 + 1;
      _DAT_0003c1f8 = 500;
    }
  }
  else if ((DAT_0003c003 & 0x40) != 0) {
    if (DAT_0003c1f5 == '\0') {
      DAT_0003c1f4 = DAT_0003c1f4 + 1;
    }
    else {
      DAT_0003c1f5 = DAT_0003c1f5 + -1;
      bVar1 = true;
    }
  }
  if (!bVar1) {
    DAT_0003c1f5 = '\x04';
  }
  return;
}
