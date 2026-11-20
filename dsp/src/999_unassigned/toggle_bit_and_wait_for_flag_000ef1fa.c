/* @k10d toggle_bit_and_wait_for_flag_000ef1fa @ 0x000ef1fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets a bit in a control register, polls a status flag until it clears then sets, and
 *   restores the original state.
 * summary:
 *   The function saves the current value of DAT_00000401, sets bits 0, 1, 3, and 6 (0xdb),
 *   and calls blink_status_flags five times. It then sets bit 7 of DAT_0000000a and enters
 *   two polling loops on bit 2 of DAT_00000005, calling blink_status_flags in each
 *   iteration. Finally, it restores the original values of DAT_00000401, _DAT_00000001, and
 *   clears bit 7 of DAT_0000000a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_and_wait_for_flag_000ef1fa(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    blink_status_flags();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    blink_status_flags();
  }
  while ((DAT_00000005 & 4) != 0) {
    blink_status_flags();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
