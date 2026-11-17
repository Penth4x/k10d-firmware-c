/* @k10d clear_bits_in_ram_byte @ 0x000ea15a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears specific bits in a RAM byte and counts iterations until bit 0 is clear.
 * summary:
 *   Calls clear_interrupt_flags_and_update_counters, then performs a fixed 8-iteration loop
 *   that clears bit 1 and conditionally bit 2 of bRam00000000. It then loops up to 14
 *   times, clearing bit 2 each iteration, until bit 0 of bRam00000000 is 0. Finally calls
 *   clear_bit_and_set_flags and returns the iteration count from the second loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort clear_bits_in_ram_byte(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  
  clear_interrupt_flags_and_update_counters();
  uVar3 = 8;
  do {
    if ((uVar3 & 6) == 0) {
      bRam00000000 = bRam00000000 & 0xfd;
    }
    uVar3 = uVar3 >> 1;
    bRam00000000 = bRam00000000 & 0xfb;
  } while (uVar3 != 0);
  uVar2 = 0;
  do {
    bVar1 = bRam00000000 & 0xfd;
    uVar2 = uVar2 + 1;
    if ((bRam00000000 & 1) == 0) break;
    bRam00000000 = bVar1;
  } while (uVar2 < 0xe);
  bRam00000000 = bVar1;
  clear_bit_and_set_flags();
  return uVar2;
}
