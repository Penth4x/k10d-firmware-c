/* @k10d copy_two_shorts_to_globals_000df27a @ 0x000df27a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reads two 16-bit values from an array indexed by param_1 and stores them into three
 *   global variables.
 * summary:
 *   The function computes an offset using param_1 * 2 and reads a short from 0x3d000 plus
 *   that offset, storing the result left-shifted by 8 into _DAT_0003c830. It then reads a
 *   short from 0x3d800 plus the same offset and stores that value (also shifted left by 8)
 *   into both _DAT_0003c834 and _DAT_0003c880. No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_two_shorts_to_globals_000df27a(int param_1)

{
  short *psVar1;
  
  _DAT_0003c830 = (int)*(short *)(param_1 * 2 + 0x3d000) << 8;
  psVar1 = (short *)(param_1 * 2 + 0x3d800);
  _DAT_0003c834 = (int)*psVar1 << 8;
  _DAT_0003c880 = (int)*psVar1 << 8;
  return;
}
