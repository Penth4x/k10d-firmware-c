/* @k10d compute_offset_with_flag @ 0x000d1c98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns the sum of two globals, conditionally adding a third based on bit 6 of a flag
 *   word.
 * summary:
 *   Adds DAT_0003f4ac and _DAT_0003c1f0. If bit 6 (0x40) of DAT_0003ce80 is clear, it also
 *   adds DAT_0003f4af. No callees are invoked and no memory is written, so this is a pure
 *   arithmetic helper. The roles of the three data globals are not revealed by this code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_offset_with_flag(void)

{
  int iVar1;
  
  iVar1 = (uint)DAT_0003f4ac + (uint)_DAT_0003c1f0;
  if ((DAT_0003ce80 & 0x40) == 0) {
    iVar1 = iVar1 + (uint)DAT_0003f4af;
  }
  return iVar1;
}
