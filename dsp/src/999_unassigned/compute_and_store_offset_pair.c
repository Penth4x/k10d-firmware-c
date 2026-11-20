/* @k10d compute_and_store_offset_pair @ 0x000c37e8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a byte offset and a size/offset value from state flags and stores them into
 *   DAT_0003c565 and DAT_0003c564.
 * summary:
 *   The function branches on DAT_0003c004 and DAT_0003c57a. In the main path, it calls
 *   clamp_value_and_set_flags_000c6682 and clamp_value_and_set_flags_000c66c8 to derive a
 *   base value, then adjusts it using update_mode_indexed_state,
 *   compute_clamped_offset_000c21d4, and DAT_000f9de4, clamping the result to non-negative.
 *   It further adjusts the offset via clamp_value_to_range_000c39b6 and
 *   clamp_value_and_set_flags_000c6682, applying bounds checks against DAT_0003c562 and
 *   DAT_0003c577. Finally, it writes the computed offset to DAT_0003c565 and a size/offset
 *   value to DAT_0003c564, with special handling for specific states in DAT_0003c440 and
 *   DAT_0003c3be.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_and_store_offset_pair(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  
  if (((DAT_0003c004 & 2) == 0) || (_DAT_0003c57a == 0)) {
    iVar2 = clamp_value_and_set_flags_000c6682(DAT_0003c572,DAT_0003c570,DAT_0003c571);
    uVar3 = clamp_value_and_set_flags_000c66c8(iVar2,DAT_0003c572,DAT_0003c573);
    if (((DAT_0003c193 & 1) != 0) && (((DAT_0003c58b & 2) != 0 && ((DAT_0003c127 & 8) != 0)))) {
      if ((DAT_0003c101 & 0x20) == 0) {
        iVar2 = update_mode_indexed_state();
      }
      else {
        iVar2 = -8;
      }
      if ((DAT_0003c589 & 1) == 0) {
        iVar4 = compute_clamped_offset_000c21d4(uVar3,1);
        iVar2 = ((iVar4 + -0x50) - iVar2) - (uint)DAT_000f9de4;
      }
      else {
        iVar4 = compute_clamped_offset_000c21d4(uVar3,1);
        iVar2 = ((iVar4 + -0x60) - iVar2) - (uint)DAT_000f9de4;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      uVar3 = clamp_value_to_range_000c39b6(uVar3 + iVar2);
      iVar2 = clamp_value_and_set_flags_000c6682(uVar3,DAT_0003c570,DAT_0003c571);
      if ((DAT_0003c589 & 1) == 0) {
        if (DAT_0003c56a < 0x69) {
          iVar4 = uVar3 + iVar2 + -0x10;
          if (iVar4 < (int)(uint)_DAT_0003c562) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 - (uint)_DAT_0003c562;
          }
          if (8 < iVar4) {
            iVar4 = 8;
          }
          uVar3 = uVar3 + iVar4;
        }
        if ((int)(uint)DAT_0003c577 < (int)uVar3) {
          uVar3 = (uint)DAT_0003c577;
        }
      }
    }
    uVar1 = _DAT_0003c562;
    uVar5 = (ushort)iVar2;
    if (((DAT_0003c127 & 8) == 0) && (((DAT_0003c127 & 4) == 0 || ((DAT_0003c589 & 0x20) == 0)))) {
      uVar5 = (ushort)DAT_0003c571;
    }
    DAT_0003c565 = (uint8_t)uVar3;
    DAT_0003c564 = (byte)uVar5;
    _DAT_0003c562 = uVar1;
    if (((DAT_0003c440 == '\x06') && ((DAT_0003c3be == '\x01' || (DAT_0003c3be == '\x02')))) ||
       ((DAT_0003c440 == '\0' && ((DAT_0003c3bd == '\x01' || (DAT_0003c3bd == '\x02')))))) {
      _DAT_0003c562 = uVar5 + (short)uVar3;
      compute_and_store_two_byte_result();
      _DAT_0003c562 = uVar1;
    }
  }
  else {
    DAT_0003c565 = compute_and_check_range();
    DAT_0003c564 = clamp_value_and_set_flags_000c6682(DAT_0003c565,DAT_0003c570,DAT_0003c571);
    if (((DAT_0003c127 & 8) == 0) && (((DAT_0003c127 & 4) == 0 || ((DAT_0003c589 & 0x20) == 0)))) {
      DAT_0003c564 = DAT_0003c571;
    }
  }
  return;
}
