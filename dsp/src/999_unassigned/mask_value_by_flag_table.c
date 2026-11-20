/* @k10d mask_value_by_flag_table @ 0x000cf41a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Selects a 16-bit value from a table by index and ANDs it with a mask built from flag
 *   bits.
 * summary:
 *   Loads a 16-bit entry from the table at DAT_000fb008 using param_1 as an index and
 *   stores it in DAT_0003ce6e and DAT_0003ce6c. If DAT_0003f2bc is not a specific sentinel,
 *   it iterates over flag bits in DAT_0003cfa4 to build a mask (uVar2) from corresponding
 *   table entries, then ANDs DAT_0003ce6e with this mask. Finally, it updates DAT_0003ce6a
 *   if it is zero and clears bit 3 of DAT_0003ce09 if set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mask_value_by_flag_table(int param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  _DAT_0003ce6e = (&DAT_000fb008)[param_1];
  _DAT_0003ce6c = _DAT_0003ce6e;
  if (_DAT_0003f2bc != -0x11196073) {
    uVar2 = 0;
    iVar1 = 0xb;
    iVar4 = 8;
    iVar3 = 2;
    do {
      if ((_DAT_0003cfa4 & *(uint *)(iVar4 + 0xfafa8) & 0xffff00ff) != 0) {
        uVar2 = uVar2 | *(ushort *)((int)&DAT_000fb008 + iVar3);
      }
      if ((_DAT_0003cfa4 & *(uint *)((int)&DAT_000fafb0 + iVar4) & 0xffff00ff) != 0) {
        uVar2 = uVar2 | *(ushort *)((int)&DAT_000fb00a + iVar3);
      }
      if ((_DAT_0003cfa4 & *(uint *)((int)&DAT_000fafb8 + iVar4) & 0xffff00ff) != 0) {
        uVar2 = uVar2 | *(ushort *)((int)&DAT_000fb00c + iVar3);
      }
      iVar3 = iVar3 + 6;
      iVar4 = iVar4 + 0x18;
      iVar1 = iVar1 + -3;
    } while (2 < iVar1);
    do {
      if ((_DAT_0003cfa4 & *(uint *)(iVar4 + 0xfafa8) & 0xffff00ff) != 0) {
        uVar2 = uVar2 | *(ushort *)((int)&DAT_000fb008 + iVar3);
      }
      iVar3 = iVar3 + 2;
      iVar4 = iVar4 + 8;
      iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    _DAT_0003ce6e = _DAT_0003ce6e & uVar2;
  }
  if (_DAT_0003ce6a == 0) {
    _DAT_0003ce6a = _DAT_0003ce6e;
  }
  if ((DAT_0003ce09 & 8) != 0) {
    _DAT_0003ce74 = 0;
    DAT_0003ce09 = DAT_0003ce09 & 0xf7;
  }
  return;
}
