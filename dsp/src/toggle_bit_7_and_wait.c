/* @k10d toggle_bit_7_and_wait @ 0x000ef38e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets bit 7 of a control word, waits for a status bit to toggle, then clears bit 7.
 * summary:
 *   The function ORs 0x80 into DAT_0000000a, then polls DAT_00000005 until bit 2 (value 4)
 *   is set, and polls again until bit 2 is cleared. It calls toggle_two_register_states in
 *   the wait loops and once in a 5-iteration loop. It also modifies DAT_0003c009 and
 *   DAT_0003c00c and calls write_byte_to_ram_and_call_two_routines with arguments 8 and
 *   0xb. The specific hardware registers and the role of the callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit_7_and_wait(void)

{
  byte bVar1;
  
  DAT_0003c009 = DAT_0003c009 | 0xf0;
  write_byte_to_ram_and_call_two_routines(8,DAT_0003c009);
  bVar1 = 0;
  do {
    toggle_two_register_states();
    bVar1 = bVar1 + 1;
  } while (bVar1 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_two_register_states();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_two_register_states();
  }
  clear_bit_in_dat_0003c00b();
  DAT_0003c00c = DAT_0003c00c & 0xf;
  write_byte_to_ram_and_call_two_routines(0xb,DAT_0003c00c);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
