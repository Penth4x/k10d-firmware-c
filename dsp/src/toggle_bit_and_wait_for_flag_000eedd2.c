/* @k10d toggle_bit_and_wait_for_flag_000eedd2 @ 0x000eedd2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bits in DAT_00000401 and DAT_0000000a, polls DAT_00000005 bit 2, and restores
 *   original values.
 * summary:
 *   The function saves the current state of DAT_00000401 and _DAT_00000001. It sets bits 0,
 *   1, 3, 6, and 7 of DAT_00000401 (OR with 0xdb) and bit 7 of DAT_0000000a. It calls
 *   toggle_status_bits_based_on_flags_000eee38 five times, then waits in a loop for bit 2
 *   of DAT_00000005 to clear, and then waits for it to set, calling
 *   toggle_status_bits_based_on_flags_000eee38 during both waits. Finally, it restores the
 *   original values of DAT_00000401, _DAT_00000001, and clears bit 7 of DAT_0000000a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_and_wait_for_flag_000eedd2(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    toggle_status_bits_based_on_flags_000eee38();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_status_bits_based_on_flags_000eee38();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_status_bits_based_on_flags_000eee38();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
