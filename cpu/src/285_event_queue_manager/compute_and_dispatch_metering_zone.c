/* @k10d compute_and_dispatch_metering_zone @ 0x10529664
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Computes a metering zone index from weighted sensor coordinates and dispatches a zone
 *   update via accumulate_four_counters.
 * summary:
 *   Calculates a weighted sum of param_2, the midpoint of param_3/param_4, and param_5
 *   using coefficients in DAT_105f9760-105f9780 to derive a zone index (iVar4). It reads a
 *   byte from a table pointed to by param_1+0x3118 using scaled coordinates and calls
 *   accumulate_four_counters with a calculated offset, width 0x36, and the zone index. The
 *   function returns a clamped value (max 0x10) derived from param_1+4 or a constant 8,
 *   likely representing a metering mode or zone count.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_and_dispatch_metering_zone(int param_1,int param_2,int param_3,int param_4,int param_5,short param_6,
                 short param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (param_3 + param_4) / 2;
  iVar1 = _DAT_105f9760/*ROM*/ * param_2 + _DAT_105f9764/*ROM*/ * iVar5 + _DAT_105f9768/*ROM*/ * param_5;
  iVar1 = ((uint)(iVar1 >> 0xb) >> 0x14) + iVar1;
  iVar4 = iVar1 >> 0xc;
  iVar2 = _DAT_105f976c/*ROM*/ * param_2 + _DAT_105f9770/*ROM*/ * iVar5 + _DAT_105f9774/*ROM*/ * param_5;
  iVar5 = _DAT_105f9778/*ROM*/ * param_2 + _DAT_105f977c/*ROM*/ * iVar5 + _DAT_105f9780/*ROM*/ * param_5;
  if (*(char *)(param_1 + 0x3114) == '\0') {
    uVar3 = ((int)*(short *)(DAT_105f97a8/*ROM*/ + (iVar1 >> 0x10) * 2) >> 8) + *(int *)(param_1 + 4);
  }
  else {
    uVar3 = 8;
  }
  uVar3 = uVar3 & 0xffff;
  if (0xf < uVar3) {
    uVar3 = 0x10;
  }
  if (0 < iVar4) {
    iVar1 = (((int)(((uint)(iVar2 >> 0xb) >> 0x14) + iVar2) >> 0xc) * 0x36) / iVar4;
    iVar4 = (((int)(((uint)(iVar5 >> 0xb) >> 0x14) + iVar5) >> 0xc) * 0x36) / iVar4;
    uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x3118) + iVar1 + 0x80 + (iVar4 + 0x80) * 0x100);
    if (0xf < uVar6) {
      uVar6 = 0;
    }
    accumulate_four_counters(param_1 + 0x1054 + uVar6 * 0x20c,uVar3,0x36,iVar1,iVar4,param_6 + param_7);
  }
  return uVar3;
}
