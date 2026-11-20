/* @k10d update_status_flags_000cd358 @ 0x000cd358
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a set of byte-level status flags and calls helper functions based on the input
 *   parameter and current state.
 * summary:
 *   The function branches on param_1. If non-zero, it clears specific bits in DAT_0003ce06
 *   and DAT_0003ce07, potentially calling merge_mask_bits_and_notify and
 *   dispatch_mode_transition_000dfc72. If zero, it sets bit 0x20 in DAT_0003ce06 and may
 *   call build_status_word_from_flags or maybe_call_e3ae0 depending on other flags. It
 *   finally stores truncated values from DAT_0003cc30 and DAT_0003cf2e into DAT_0003ce8c
 *   and DAT_0003ce8d.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_flags_000cd358(int param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar4;
  int iVar3;
  
  if (param_1 != 0) {
    if ((_DAT_0003ce74 == 0) || ((DAT_0003ce00 & 0x80) != 0)) {
      merge_mask_bits_and_notify(_DAT_0003ce6e,1);
    }
    _DAT_0003ce86 = 0;
    if ((DAT_0003ce07 & 0x40) != 0) {
      dispatch_mode_transition_000dfc72(2,1);
      DAT_0003ce07 = DAT_0003ce07 & 0xbf;
    }
    bVar1 = DAT_0003ce06 & 0x3f;
    bVar2 = DAT_0003ce06 & 0x20;
    DAT_0003ce06 = bVar1;
    if (bVar2 != 0) {
      if ((DAT_0003c021 & 4) == 0) {
        clear_bit_5_of_0x3c021_000e3b8e();
      }
      DAT_0003ce06 = DAT_0003ce06 & 0xdf;
    }
    goto LAB_000cd476;
  }
  if ((DAT_0003ce00 & 0x20) == 0) {
    bVar4 = false;
    if (((DAT_0003c394 & 0x10) != 0) && ((DAT_0003c394 & 0xc) == 0)) {
      bVar4 = true;
    }
    if (bVar4) goto LAB_000cd432;
    if (((DAT_0003ce07 & 0x40) == 0) && ((DAT_0003ce09 & 2) == 0)) {
      dispatch_mode_transition_000dfc72(2,0);
      DAT_0003ce07 = DAT_0003ce07 | 0x40;
    }
    if ((((DAT_0003f287 & 0x10) == 0) || ((DAT_0003cf0e & 0xf) != 0)) && ((DAT_0003c4dd & 1) == 0))
    {
      merge_mask_bits_and_notify((&DAT_000fb008)[DAT_0003cbef & 0xf],2);
    }
    else {
      merge_mask_bits_and_notify(*(uint16_t *)(&DAT_000fae54 + (uint)DAT_0003cc6e * 2),2);
    }
    build_status_word_from_flags();
  }
  else {
LAB_000cd432:
    if ((DAT_0003ce07 & 0x40) != 0) {
      dispatch_mode_transition_000dfc72(2,1);
      DAT_0003ce07 = DAT_0003ce07 & 0xbf;
    }
  }
  if ((((DAT_0003ce06 & 0x20) == 0) &&
      (DAT_0003ce06 = DAT_0003ce06 | 0x20, (DAT_0003ce00 & 0x20) == 0)) &&
     ((DAT_0003c3a6 == '\0' && (iVar3 = check_two_flag_bits_000ce7a6(), iVar3 == 1)))) {
    bVar4 = false;
    if (((DAT_0003c394 & 0x10) != 0) && ((DAT_0003c394 & 0xc) == 0)) {
      bVar4 = true;
    }
    if (!bVar4) {
      maybe_call_e3ae0();
    }
  }
LAB_000cd476:
  if (_DAT_0003cc30 < 0x100) {
    DAT_0003ce8c = (uint8_t)_DAT_0003cc30;
  }
  else {
    DAT_0003ce8c = 0xff;
  }
  DAT_0003ce8d = (char)((ushort)_DAT_0003cf2e >> 8);
  DAT_0003ce06 = DAT_0003ce06 & 0xef;
  return;
}
