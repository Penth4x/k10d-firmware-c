/* @k10d initialize_interrupt_context @ 0x000daa9a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets up interrupt flags and status registers by clearing a global, calling an init
 *   routine, and manipulating bitmasks in memory.
 * summary:
 *   The function calls set_low_seven_bits_of_0x400 and update_ram_byte_bits(0xb), then
 *   clears DAT_00000062. It checks bit 6 of DAT_0003c181 to determine whether to set or
 *   clear bits 0-2 in bRam00000000 and DAT_0003c00c. It constructs a 32-bit value from
 *   processor status flags (PS, VF, CF) and local variables, stores it on the stack, clears
 *   bit 6 of bRam00000000, calls toggle_ram0_bit1_with_calls three times, and finally sets
 *   bit 6 of bRam00000000.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_interrupt_context(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint in_ps;
  byte in_CF;
  byte in_VF;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar4 = 0;
  bVar3 = 0;
  puVar1 = &stack0xfffffffc;
  set_low_seven_bits_of_0x400();
  DAT_00000062 = 0;
  update_ram_byte_bits(0xb);
  bVar2 = (DAT_0003c181 & 0x40) == 0;
  if (bVar2) {
    bRam00000000 = bRam00000000 & 0xf7 | 7;
    DAT_0003c00c = DAT_0003c00c & 0xf7 | 7;
  }
  else {
    bRam00000000 = bRam00000000 | 0xf;
    DAT_0003c00c = DAT_0003c00c | 0xf;
  }
  *(uint *)(puVar1 + -4) =
       in_ps & 0xffffffc0 | (uint)(bVar4 & 1) * 0x20 | (uint)(bVar3 & 1) * 0x10 | (uint)bVar2 * 4 |
       (uint)(in_VF & 1) * 2 | (uint)(in_CF & 1);
  bRam00000000 = bRam00000000 & 0xbf;
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  bRam00000000 = bRam00000000 | 0x40;
  return;
}
