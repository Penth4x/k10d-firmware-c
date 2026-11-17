/* @k10d wait_for_bit_toggle_sequence @ 0x000ef510
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Writes configuration values, polls a status bit until it toggles, and clears the bit.
 * summary:
 *   The function writes several values to DAT_0003c00d and DAT_0003c010 via
 *   write_byte_to_ram_and_call_two_routines and write_masked_field_and_call_two_routines.
 *   It then sets bit 7 of DAT_0000000a and polls DAT_00000005 bit 2 in two loops (waiting
 *   for it to clear, then for it to set), calling FUN_000ef5dc during the waits. Finally,
 *   it clears bit 7 of DAT_0000000a and writes additional values via
 *   write_masked_field_and_call_two_routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_bit_toggle_sequence(void)

{
  byte bVar1;
  
  DAT_0003c00d = 0x44;
  write_byte_to_ram_and_call_two_routines(0xc,0x44);
  _DAT_0003c010 = 0x200;
  write_byte_to_ram_and_call_two_routines(0xe,0x200);
  write_byte_to_ram_and_call_two_routines(7,0xcb);
  write_masked_field_and_call_two_routines(0x1c,DAT_0003c00d & 0x7f | 0x80);
  bVar1 = 0;
  do {
    FUN_000ef5dc();
    bVar1 = bVar1 + 1;
  } while (bVar1 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    FUN_000ef5dc();
  }
  while ((DAT_00000005 & 4) != 0) {
    FUN_000ef5dc();
  }
  write_two_bit_field_to_dat_0003c008(0);
  write_masked_field_and_call_two_routines(0x17,0xf0);
  write_masked_field_and_call_two_routines(0x17,0xc0);
  write_masked_field_and_call_two_routines(0x17,0);
  write_masked_field_and_call_two_routines(7,DAT_0003c008 & 3);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
