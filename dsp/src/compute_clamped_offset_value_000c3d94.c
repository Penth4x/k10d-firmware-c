/* @k10d compute_clamped_offset_value_000c3d94 @ 0x000c3d94
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Computes a value from global state, conditionally adjusts it, clamps it, and stores the
 *   result via a helper function.
 * summary:
 *   The function calculates a base value from DAT_0003c566 and DAT_0003c576, passing it
 *   through clamp_value_to_range_000d9ac0. It conditionally adds an offset derived from
 *   update_mode_indexed_state if specific bits in DAT_0003c127 and DAT_0003c101 are set.
 *   The final result is clamped to a maximum of 0x74 and passed again to
 *   clamp_value_to_range_000d9ac0 before being stored in DAT_0003c572.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_clamped_offset_value_000c3d94(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_0003c566 + 0x4c < (uint)DAT_0003c576) {
    uVar1 = 0;
  }
  else {
    uVar1 = (DAT_0003c566 + 0x4c) - (uint)DAT_0003c576;
  }
  DAT_0003c572 = (char)(uVar1 >> 1) + DAT_0003c576 + -8;
  DAT_0003c572 = clamp_value_to_range_000d9ac0(DAT_0003c572,0x58,0x6c);
  if ((((DAT_0003c127 & 8) != 0) && ((DAT_0003c101 & 0x20) == 0)) && (0x2f < DAT_0003c566)) {
    iVar2 = update_mode_indexed_state();
    iVar2 = (0x30 - iVar2) / 2;
    if ((DAT_0003c580 & 0x10) == 0) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x10 < iVar2) {
        iVar2 = 0x10;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  DAT_0003c572 = DAT_0003c572 + (char)iVar2;
  if (0x74 < DAT_0003c572) {
    DAT_0003c572 = 0x74;
  }
  DAT_0003c572 = clamp_value_to_range_000d9ac0(DAT_0003c572,DAT_0003c576,DAT_0003c577);
  return;
}
