/* @k10d wait_for_bit_toggle @ 0x000ee9a0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets a flag, waits for a status bit to set then clear, and restores the original flag
 *   state.
 * summary:
 *   The function saves the value of DAT_00000401, sets bits 0, 1, 3, 6, and 7 (mask 0xdb),
 *   and calls toggle_status_bits_based_on_flags_000eea06 five times. It then sets bit 7 of
 *   DAT_0000000a and polls DAT_00000005 bit 2 (value 4) in two loops: first waiting for it
 *   to be set, then waiting for it to be cleared, calling
 *   toggle_status_bits_based_on_flags_000eea06 during each wait. Finally, it restores
 *   DAT_00000401, _DAT_00000001, and clears bit 7 of DAT_0000000a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_bit_toggle(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    toggle_status_bits_based_on_flags_000eea06();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_status_bits_based_on_flags_000eea06();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_status_bits_based_on_flags_000eea06();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
