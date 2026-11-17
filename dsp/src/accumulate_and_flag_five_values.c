/* @k10d accumulate_and_flag_five_values @ 0x000dfa80
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Accumulates five 16-bit values over five iterations, normalizes them, and sets/clears
 *   status bits based on thresholds.
 * summary:
 *   The function loops five times, calling compute_position_deltas and adding constants
 *   from DAT_0003c810-0003c818 into five local accumulators. It then passes each
 *   accumulator to divide_two_integers with a second argument of 5. If any result is less
 *   than -0x1c2, it sets a corresponding bit in DAT_00000001 or DAT_00000004, calls
 *   busy_wait_on_mode_flag(0x1ea), clears those bits, and calls
 *   busy_wait_on_mode_flag(0x154).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_and_flag_five_values(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sStack_1c;
  short sStack_1a;
  
  sStack_1a = 0;
  sStack_1c = 0;
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = 0;
  bVar6 = 0;
  do {
    compute_position_deltas();
    sStack_1a = sStack_1a + _DAT_0003c814;
    sStack_1c = sStack_1c + _DAT_0003c816;
    iVar9 = (int)(short)((short)iVar9 + _DAT_0003c818);
    iVar8 = (int)(short)((short)iVar8 + _DAT_0003c810);
    iVar7 = (int)(short)((short)iVar7 + _DAT_0003c812);
    bVar6 = bVar6 + 1;
  } while (bVar6 < 5);
  sVar1 = divide_two_integers((int)sStack_1a,5);
  sVar2 = divide_two_integers((int)sStack_1c,5);
  sVar3 = divide_two_integers(iVar9,5);
  sVar4 = divide_two_integers(iVar8,5);
  sVar5 = divide_two_integers(iVar7,5);
  if (sVar1 < -0x1c2) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  if (sVar2 < -0x1c2) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  if (sVar3 < -0x1c2) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  if (sVar4 < -0x1c2) {
    DAT_00000001 = DAT_00000001 | 8;
  }
  if (sVar5 < -0x1c2) {
    DAT_00000001 = DAT_00000001 | 0x10;
  }
  busy_wait_on_mode_flag(0x1ea);
  if (sVar1 < -0x1c2) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  if (sVar2 < -0x1c2) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  if (sVar3 < -0x1c2) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  if (sVar4 < -0x1c2) {
    DAT_00000001 = DAT_00000001 & 0xf7;
  }
  if (sVar5 < -0x1c2) {
    DAT_00000001 = DAT_00000001 & 0xef;
  }
  busy_wait_on_mode_flag(0x154);
  return;
}
