/* @k10d update_dat_0003c564 @ 0x000c3ac4
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Copies DAT_0003c571 into DAT_0003c564, or recomputes it via two callees when bit 3 of
 *   DAT_0003c127 is set.
 * summary:
 *   Unconditionally assigns DAT_0003c571 to DAT_0003c564. If bit 3 of DAT_0003c127 is set,
 *   it calls compute_signed_offset_value_000c66f6(1) and then
 *   clamp_value_and_set_flags_000c6682 with that result plus DAT_0003c570 and DAT_0003c571,
 *   storing the final value into DAT_0003c564. No MMIO or known kernel primitives are
 *   touched; the role of the DAT globals is not revealed by this code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_dat_0003c564(void)

{
  uint32_t uVar1;
  
  DAT_0003c564 = DAT_0003c571;
  if ((DAT_0003c127 & 8) != 0) {
    uVar1 = compute_signed_offset_value_000c66f6(1);
    DAT_0003c564 = clamp_value_and_set_flags_000c6682(uVar1,DAT_0003c570,DAT_0003c571);
  }
  return;
}
