/* @k10d toggle_bit_and_wait_for_flag_000ee83a @ 0x000ee83a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets a bit in a control word, polls a status flag until it clears then sets, and
 *   restores the original state.
 * summary:
 *   The function saves the current value of DAT_00000401 and sets bits 0, 1, 3, 6, and 7
 *   (mask 0xdb). It calls toggle_status_bits_based_on_flags_000ee8a0 five times, then sets
 *   bit 7 of DAT_0000000a. It enters two polling loops calling
 *   toggle_status_bits_based_on_flags_000ee8a0: first waiting for bit 2 of DAT_00000005 to
 *   clear, then waiting for it to set. Finally, it restores DAT_00000401 and DAT_0000000a
 *   to their original values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_and_wait_for_flag_000ee83a(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    toggle_status_bits_based_on_flags_000ee8a0();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_status_bits_based_on_flags_000ee8a0();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_status_bits_based_on_flags_000ee8a0();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
