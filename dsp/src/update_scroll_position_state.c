/* @k10d update_scroll_position_state @ 0x000d2058
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calculates and updates scroll offset and limit values based on current index and size
 *   parameters.
 * summary:
 *   The function reads values from update_mode_indexed_state and
 *   compute_signed_fixed_point_value, performs arithmetic to determine a new offset (stored
 *   in DAT_0003cd57) and a limit (stored in DAT_0003cd5c). It uses a lookup table at
 *   DAT_000fb304 indexed by DAT_0003c102 to adjust the calculation. If the state changes
 *   significantly, it calls clamp_and_scale_value_000d21a6 to update related pointers and
 *   potentially calls unsigned_divide. The logic resembles a scroll or pagination update
 *   mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_scroll_position_state(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = update_mode_indexed_state();
  iVar2 = iVar2 >> 1;
  iVar6 = (DAT_0003c102 >> 2 & 0xfe) - 0x14;
  uVar1 = (uint)_DAT_0003cd5a;
  uVar3 = compute_signed_fixed_point_value();
  _DAT_0003cd5a = (ushort)(uVar3 >> 3);
  uVar5 = (uint)(byte)(&DAT_000fb304)[DAT_0003c102 & 7] * 4;
  DAT_0003cd59 = (char)iVar2 + (char)uVar5;
  uVar4 = DAT_0003cd59 - iVar6;
  if ((byte)(&DAT_000fb304)[DAT_0003c102 & 7] == 7) {
    uVar5 = uVar4 + 0x1c >> 1;
    if ((int)DAT_0003cd5c < (int)uVar5) {
      uVar5 = 0x1c;
      iVar2 = (uVar4 - 0x1c) + iVar6;
    }
    else {
      iVar2 = (uVar4 - uVar5) + iVar6;
      uVar4 = uVar5;
    }
  }
  DAT_0003cd5d = (char)uVar5 - DAT_0003cd5c;
  if (((uVar1 != (uVar3 >> 3 & 0xffff)) || (iVar6 != DAT_0003cd58)) ||
     (((DAT_0003ce01 & 1) == 0 &&
      ((('\x02' < DAT_0003cd5d || (DAT_0003cd5d < -2)) || (uVar5 == uVar4)))))) {
    _DAT_0003cd50 = clamp_and_scale_value_000d21a6(iVar2);
    if (DAT_0003cd5c == '\x7f') {
      _DAT_0003ce5c =
           unsigned_divide((uint)_DAT_0003cd50 * (uint)_DAT_0003ce0e,0x100 >> (DAT_0003cd56 & 0x1f));
    }
    DAT_0003cd5c = (char)uVar5;
    _DAT_0003cd54 = clamp_and_scale_value_000d21a6((int)DAT_0003cd59);
    _DAT_0003ce5a = 0xf000;
    _DAT_0003ce58 = 0xf000;
  }
  DAT_0003cd57 = (char)iVar2;
  DAT_0003cd58 = (char)iVar6;
  return;
}
