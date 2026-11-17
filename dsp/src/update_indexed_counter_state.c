/* @k10d update_indexed_counter_state @ 0x000cf9ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Updates a running counter and state flags based on a table lookup indexed by a global
 *   variable.
 * summary:
 *   The function reads an index from DAT_0003cc6e and, if non-zero, fetches a 16-bit value
 *   from a table at 0x3cf30. It adjusts a running total in _DAT_0003ce34 and decrements
 *   _DAT_0003ce18 by the high byte of the fetched value. It also conditionally sets bits in
 *   DAT_0003ce05 and DAT_0003ce08 based on various flag checks in other globals. No MMIO or
 *   external device calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_indexed_counter_state(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)DAT_0003cc6e;
  if (DAT_0003cc6e != 0) {
    DAT_0003cf0f = (&DAT_0003cf0f)[uVar2];
    iVar3 = (uVar2 - 1) * 2;
    _DAT_0003cf2e = *(ushort *)(iVar3 + 0x3cf30);
    if ((DAT_0003c128 & 0x40) == 0) {
      _DAT_0003ce1c = (ushort)((uint)_DAT_0003ce1c + (uint)*(ushort *)(iVar3 + 0x3cf6c) >> 1);
    }
    else {
      _DAT_0003ce1c = *(short *)(iVar3 + 0x3cf6c) - 1;
      if ((short)_DAT_0003ce1c < 0) {
        _DAT_0003ce1c = 0;
      }
    }
    _DAT_0003ce78 = _DAT_0003cf2c;
    uVar1 = _DAT_0003cf2e >> 8;
    uVar2 = (uint)uVar1;
    if (((((DAT_0003f4aa & 0xf0) <= uVar2) || ((DAT_0003cbd4 & 2) != 0)) ||
        ((DAT_0003cb80 & 8) == 0)) ||
       (((DAT_0003ce07 & 8) != 0 || (((DAT_0003f282 & 0x10) == 0 && ((DAT_0003c101 & 8) != 0)))))) {
      DAT_0003ce05 = DAT_0003ce05 | 0x40;
    }
    _DAT_0003ce34 = _DAT_0003ce34 + uVar1;
    _DAT_0003ce18 = _DAT_0003ce18 - uVar1;
  }
  if (((DAT_0003f284 & 0x40) != 0) && ((DAT_0003ce01 & 1) == 0)) {
    if ((uVar2 == 0) ||
       (((((DAT_0003ce00 & 0x40) == 0 || (1 < (DAT_0003cf0f & 0xf))) || ((DAT_0003ce06 & 0x10) != 0)
         ) || ((DAT_0003ce01 & 0x40) != 0)))) {
      DAT_0003ce08 = DAT_0003ce08 & 0xdf;
    }
    else if ((((uint)_DAT_0003f2a8 <= (uint)((int)(uint)_DAT_0003cf2e >> 6)) &&
             ((DAT_0003cb80 & 8) != 0)) && ((DAT_0003cf0f & 0xf) == 0)) {
      DAT_0003ce08 = DAT_0003ce08 | 0x20;
    }
  }
  return;
}
