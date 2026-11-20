/* @k10d compute_clamped_index_and_dispatch @ 0x000f5a1e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes a clamped index from DAT_0003c574 and calls select_and_apply_byte_pair with it
 *   and a secondary flag.
 * summary:
 *   Reads DAT_0003c574 and applies different arithmetic based on DAT_0003c3ac, clamping the
 *   result to the range [0, 0xe]. If DAT_0003c022 bit 0 is clear, it overrides the index to
 *   0xf and the flag to 0. Finally, it calls select_and_apply_byte_pair with the computed
 *   index and flag. The specific meaning of the index and flag is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_clamped_index_and_dispatch(void)

{
  int iVar1;
  uint8_t uVar2;
  
  if (DAT_0003c3ac == '\0') {
    iVar1 = (DAT_0003c574 + 2 >> 2) - 9;
  }
  else {
    iVar1 = (uint)(DAT_0003c574 >> 3) * 3 + (uint)(byte)(&DAT_000fc8f0)[DAT_0003c574 & 7] + -0x11;
  }
  uVar2 = iVar1 < 0;
  if ((bool)uVar2) {
    iVar1 = 0;
  }
  if (0xd < iVar1) {
    iVar1 = 0xe;
    uVar2 = 2;
  }
  if ((DAT_0003c022 & 1) == 0) {
    iVar1 = 0xf;
    uVar2 = 0;
  }
  select_and_apply_byte_pair(iVar1,uVar2);
  return;
}
