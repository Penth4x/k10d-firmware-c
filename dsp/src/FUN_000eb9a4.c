/* @k10d FUN_000eb9a4 @ 0x000eb9a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb9a4(void)

{
  char cVar1;
  char cVar2;
  
  DAT_000000cf = DAT_000000cf & 0xfe;
  cVar1 = (char)_DAT_0003c1e2;
  DAT_000000ce = 0x12;
  DAT_000000c8 = cVar1;
  if (_DAT_0003c1e4 == 0) {
    DAT_00000002 = DAT_00000002 & 0xfe;
  }
  else {
    cVar2 = (char)_DAT_0003c1e4;
    if ((DAT_0003f3e6 & 0x80) == 0) {
      DAT_00000056 = 2;
      DAT_00000002 = DAT_00000002 & 0xfe;
      do {
      } while ((DAT_00000057 & 4) == 0);
      DAT_00000057 = DAT_00000057 & 0xfe;
      DAT_00000050 = cVar2;
    }
    else {
      if ((uint)_DAT_0003c1e4 * 4 < (uint)_DAT_0003c1e2) {
        DAT_000000c8 = cVar1 + cVar2 * -4;
        DAT_00000002 = DAT_00000002 & 0xfe;
      }
      if ((uint)_DAT_0003c1e4 * 4 - (uint)_DAT_0003c1e2 == 0) {
        DAT_00000002 = DAT_00000002 & 0xfc;
      }
      if ((uint)_DAT_0003c1e2 <= (uint)_DAT_0003c1e4 * 4 &&
          (uint)_DAT_0003c1e4 * 4 - (uint)_DAT_0003c1e2 != 0) {
        DAT_00000050 = cVar2 * '\x04' - cVar1;
        DAT_00000056 = 2;
        do {
        } while ((DAT_00000057 & 4) == 0);
        DAT_00000057 = DAT_00000057 & 0xfe;
        DAT_00000002 = DAT_00000002 & 0xfc;
        DAT_000000cf = DAT_000000cf | 4;
      }
    }
  }
  if ((DAT_000000cf & 4) == 0) {
    DAT_000000cf = DAT_000000cf | 1;
  }
  if (DAT_0003c564 < 0x81) {
    DAT_00000050 = '@';
    DAT_00000056 = 2;
    DAT_00000057 = DAT_00000057 | 1;
  }
  return;
}
