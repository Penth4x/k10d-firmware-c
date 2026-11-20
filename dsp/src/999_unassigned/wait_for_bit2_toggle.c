/* @k10d wait_for_bit2_toggle @ 0x000ee56e
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Sets bit 7 of DAT_00000401, polls DAT_00000005 bit 2 until it clears then sets, and
 *   restores the original state.
 * summary:
 *   The function saves DAT_00000401 and _DAT_00000001, sets bits 0x1, 0x2, 0x4, 0x8, 0x20,
 *   0x40, 0x80 (0xdb) in DAT_00000401, and sets bit 7 of DAT_0000000a. It calls
 *   toggle_status_bits_based_on_flags_000ee5d4 five times, then polls DAT_00000005 bit 2 in
 *   two loops (waiting for clear, then for set), calling
 *   toggle_status_bits_based_on_flags_000ee5d4 during each wait. Finally it restores
 *   DAT_00000401, _DAT_00000001, and clears bit 7 of DAT_0000000a. The role of
 *   DAT_00000401, DAT_00000005, and DAT_0000000a is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_bit2_toggle(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    toggle_status_bits_based_on_flags_000ee5d4();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_status_bits_based_on_flags_000ee5d4();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_status_bits_based_on_flags_000ee5d4();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
