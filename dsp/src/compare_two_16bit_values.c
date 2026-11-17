/* @k10d compare_two_16bit_values @ 0x000d4380
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Reads two 16-bit values from a table, compares them, and calls a handler if they differ
 *   by more than 0x18.
 * summary:
 *   The function loads two indices from DAT_0003cf0c and DAT_0003cf0d, uses
 *   update_status_flags_and_write_state to resolve them, and reads 16-bit values from a
 *   table at 0x3cc32. It applies conditional overrides based on flags in DAT_0003cb80,
 *   DAT_0003cbb7, and DAT_0003cb9b. If both values are negative, it calls
 *   clear_six_word_globals_000d41b0; otherwise, it calculates the absolute difference and
 *   calls update_short_at_offset_0x3cbf2, load_two_byte_pair_from_table,
 *   update_state_flags_and_copy_params, and compute_signed_product_with_offset if the
 *   difference is significant or the values are ordered in a specific way.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compare_two_16bit_values(int param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  ushort uStack_20;
  uint16_t uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  int iVar6;
  
  uVar4 = (uint)DAT_0003cf0c;
  uVar3 = (uint)DAT_0003cf0d;
  iVar6 = 4;
  do {
    iVar5 = iVar6 + -1;
    bVar1 = 0 < iVar6;
    *(uint8_t *)((int)&uStack_1e + iVar6 + 1) = *(uint8_t *)(iVar6 + 0xfb367);
    iVar6 = iVar5;
  } while (bVar1 && iVar5 != 0);
  uStack_20 = 0xffff;
  uStack_1e = 0xffff;
  if (((param_1 != 4) && (param_1 != 8)) && (update_status_flags_and_write_state(uVar4), (DAT_0003cb80 & 1) != 0)) {
    uStack_20 = *(ushort *)(uVar4 * 2 + 0x3cc32);
    uStack_1c = _DAT_0003ccd4;
    if ((DAT_0003cb80 == 0x1f) && ((DAT_0003cbb7 & 0x10) == 0)) {
      if ((DAT_0003cb9b & 0x1f) != 0x1f) {
        uStack_20 = 0x7fe6;
      }
    }
    else {
      uStack_20 = 0x7fff;
    }
  }
  update_status_flags_and_write_state(uVar3);
  if ((DAT_0003cb80 & 1) != 0) {
    uStack_1e = *(ushort *)(uVar3 * 2 + 0x3cc32);
    uStack_1a = _DAT_0003ccd4;
    if ((DAT_0003cb80 == 0x1f) && ((DAT_0003cbb7 & 0x10) == 0)) {
      if ((DAT_0003cb9b & 0x1f) != 0x1f) {
        uStack_1e = 0x7fe6;
      }
    }
    else {
      uStack_1e = 0x7fff;
    }
  }
  iterate_and_call_subroutine();
  if (((short)uStack_20 < 0) && ((short)uStack_1e < 0)) {
    clear_six_word_globals_000d41b0();
  }
  else {
    if (uStack_1e < uStack_20) {
      uVar2 = uStack_20 - uStack_1e;
    }
    else {
      uVar2 = uStack_1e - uStack_20;
    }
    if (uVar2 < 0x19) {
      if (uStack_1a < uStack_1c) {
        uVar3 = uVar4;
      }
    }
    else if (uStack_20 < uStack_1e) {
      uVar3 = uVar4;
    }
    update_short_at_offset_0x3cbf2(uVar3);
    load_two_byte_pair_from_table(uVar3);
    update_state_flags_and_copy_params(uVar3);
    compute_signed_product_with_offset();
  }
  return;
}
