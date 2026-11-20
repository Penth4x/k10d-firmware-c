/* @k10d FUN_000c1954 @ 0x000c1954
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c1954(void)

{
  byte bVar1;
  uint uVar2;
  uint32_t uVar3;
  bool bVar4;
  
  DAT_0003c580 = DAT_0003c580 & 0xfe;
  bVar4 = false;
  if ((((DAT_0003c193 & 1) != 0) && ((DAT_0003c18f & 0xe0) == DAT_000f9ddc)) &&
     ((DAT_0003c190 & 0xc0) == 0x40)) {
    bVar1 = DAT_0003c10c & 3;
    uVar2 = (DAT_0003c10a & 7) >> 1;
    uVar3 = 0;
    if ((DAT_0003c127 & 8) == 0) {
      if (((DAT_0003c127 & 4) == 0) || ((DAT_0003f324 & 4) == 0)) {
        bVar4 = true;
      }
      else if ((DAT_0003c126 & 2) == 0) {
        bVar1 = 0;
        uVar2 = 0;
      }
    }
    else if ((DAT_0003c126 & 8) == 0) {
      uVar3 = 1;
    }
    else {
      bVar4 = (DAT_0003f324 & 8) == 0;
    }
    if (!bVar4) {
      _DAT_0003c562 =
           compute_adjusted_offset(((DAT_0003c190 & 0x3f) << 2 | DAT_0003c18f & 3) + (uint)DAT_0003c568 + -8,
                        bVar1,uVar2,uVar3);
    }
  }
  return;
}
