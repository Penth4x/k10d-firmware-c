/* @k10d toggle_bit_and_wait_for_flag_000eeb06 @ 0x000eeb06
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets a bit in a control register, waits for a status flag to toggle, then restores the
 *   register.
 * summary:
 *   The function saves the state of DAT_00000401, sets bits 0, 1, 3, 6, and 7 (mask 0xdb),
 *   and calls toggle_status_bits_based_on_flags_000eeb6c five times. It then sets bit 7 of
 *   DAT_0000000a and polls DAT_00000005 for bit 2 to clear, then for bit 2 to set, calling
 *   toggle_status_bits_based_on_flags_000eeb6c during each wait. Finally, it restores the
 *   original values of DAT_00000401, _DAT_00000001, and clears bit 7 of DAT_0000000a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_and_wait_for_flag_000eeb06(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    toggle_status_bits_based_on_flags_000eeb6c();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_status_bits_based_on_flags_000eeb6c();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_status_bits_based_on_flags_000eeb6c();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
