/* @k10d update_status_flags_000cf38e @ 0x000cf38e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates two status byte globals based on comparisons between integer values and a
 *   threshold.
 * summary:
 *   The function clears bit 0 of DAT_0003cfd0 and then conditionally sets bits 0, 6, and 7
 *   of DAT_0003cf0e and bit 0 of DAT_0003cfd0. The logic branches on whether DAT_0003f1b2
 *   is zero, comparing values in DAT_0003cd78, DAT_0003f24e, DAT_0003f486, and DAT_0003f487
 *   against differences or scaled values of DAT_0003f1b4 and DAT_0003f1b5. No external
 *   functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_flags_000cf38e(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  DAT_0003cfd0 = DAT_0003cfd0 & 0xfe;
  bVar1 = DAT_0003cf0e;
  if (DAT_0003f1b2 == '\0') {
    if (_DAT_0003cd78 <= _DAT_0003f24e) {
      if ((int)(uint)DAT_0003f487 < (int)((uint)_DAT_0003f24e - (uint)_DAT_0003cd78)) {
        DAT_0003cf0e = DAT_0003cf0e | 0x40;
      }
      bVar1 = DAT_0003cf0e;
      if ((int)(uint)DAT_0003f486 < (int)((uint)_DAT_0003f24e - (uint)_DAT_0003cd78)) {
        bVar1 = DAT_0003cf0e | 0x80;
      }
    }
  }
  else {
    iVar3 = (uint)_DAT_0003cd78 - (uint)_DAT_0003f24e;
    if (_DAT_0003f24e <= _DAT_0003cd78) {
      if ((int)((uint)DAT_0003f1b4 * 10 >> 4) < iVar3) {
        DAT_0003cfd0 = DAT_0003cfd0 | 1;
      }
      uVar2 = (uint)DAT_0003f1b4 * 0xf >> 4;
      if (((int)uVar2 < iVar3) &&
         (bVar1 = DAT_0003cf0e | 0x40, (int)(uVar2 + ((uint)DAT_0003f1b5 * 10 >> 4)) < iVar3)) {
        bVar1 = DAT_0003cf0e | 0xc0;
      }
    }
  }
  DAT_0003cf0e = bVar1;
  return;
}
