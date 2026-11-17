/* @k10d toggle_bit_and_wait_for_flag_000ee6d4 @ 0x000ee6d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets a bit in a control register, waits for a status flag to toggle, then restores the
 *   original state.
 * summary:
 *   The function saves the current value of DAT_00000401 and sets bits 0, 1, 3, and 6
 *   (0xdb). It calls toggle_status_bits_based_on_flags_000ee73a five times, then sets bit 7
 *   of DAT_0000000a. It waits for bit 2 of DAT_00000005 to clear, then waits for it to set,
 *   calling toggle_status_bits_based_on_flags_000ee73a in both loops. Finally, it restores
 *   DAT_00000401 and DAT_0000000a to their original values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_and_wait_for_flag_000ee6d4(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    toggle_status_bits_based_on_flags_000ee73a();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_status_bits_based_on_flags_000ee73a();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_status_bits_based_on_flags_000ee73a();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
