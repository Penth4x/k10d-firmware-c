/* @k10d accumulate_shifted_samples @ 0x000d40d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Accumulates a variable number of 16-bit samples from a rotating buffer and right-shifts
 *   the sum.
 * summary:
 *   The function checks several flag bits in DAT_0003cbef and DAT_0003c021. If a specific
 *   condition is met, it calls clear_six_word_globals_000d41b0. It then extracts a shift
 *   amount from DAT_0003f258, rotates a 4-slot buffer of 16-bit values (DAT_0003cc80-0x86),
 *   and sums a number of slots determined by the shift amount. The sum is right-shifted by
 *   the shift amount and stored in DAT_0003cbf0. This pattern is characteristic of a moving
 *   average or low-pass filter implementation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_shifted_samples(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((((DAT_0003cbef & 0x40) != 0) || ((DAT_0003c021 & 1) != 0)) && (DAT_0003cc90 != 0)) {
    clear_six_word_globals_000d41b0();
  }
  if ((((DAT_0003c021 & 1) == 0) &&
      (bVar1 = (byte)(((uint)DAT_0003f258 << 0x1a) >> 0x1e), DAT_0003cc91 = bVar1, bVar1 != 0)) &&
     (bVar1 != 3)) {
    DAT_0003cc91 = bVar1 << 1;
    if (DAT_0003cc90 == 0) {
      _DAT_0003cc80 = _DAT_0003cbf0;
      _DAT_0003cc82 = _DAT_0003cbf0;
      _DAT_0003cc84 = _DAT_0003cbf0;
    }
    _DAT_0003cc86 = _DAT_0003cc84;
    _DAT_0003cc84 = _DAT_0003cc82;
    _DAT_0003cc82 = _DAT_0003cc80;
    _DAT_0003cc80 = _DAT_0003cbf0;
    if (DAT_0003cc90 < 4) {
      DAT_0003cc90 = DAT_0003cc90 + 1;
    }
    if (bVar1 != 0) {
      iVar2 = 0;
      do {
        iVar3 = iVar3 + *(short *)(&DAT_0003cc80 + iVar2);
        iVar2 = iVar2 + 2;
      } while (iVar2 < (int)((uint)DAT_0003cc91 * 2));
    }
    _DAT_0003cbf0 = (uint16_t)(iVar3 >> bVar1);
  }
  return;
}
