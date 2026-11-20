/* @k10d toggle_two_register_states @ 0x000ef416
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Writes two distinct sets of values to a group of control registers and memory
 *   locations.
 * summary:
 *   The function executes a two-phase sequence. In the first phase, it sets DAT_0003c00a to
 *   0x55, modifies DAT_0003c00b, and sets DAT_0003c00c to 0x40, calling helper functions
 *   write_byte_to_ram_and_call_two_routines, write_masked_field_and_call_two_routines, and
 *   update_ram_byte_bits. It also modifies bRam00000000 and calls busy_wait_on_mode_flag.
 *   In the second phase, it changes DAT_0003c00a to 0xaa, modifies DAT_0003c00b again,
 *   clears DAT_0003c00c, and repeats the helper calls with updated parameters. The specific
 *   roles of the DAT and bRam globals are not determinable from the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_two_register_states(void)

{
  DAT_0003c00a = 0x55;
  write_byte_to_ram_and_call_two_routines(9,0x55);
  DAT_0003c00b = DAT_0003c00b & 0xce | 0x10;
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  DAT_0003c00c = 0x40;
  write_masked_field_and_call_two_routines(0x1b,0x40);
  write_masked_field_and_call_two_routines(0xf,0x18);
  update_ram_byte_bits(0x1f);
  bRam00000000 = bRam00000000 & 0xbb | 8;
  busy_wait_on_mode_flag(0x1b8);
  bRam00000000 = bRam00000000 | 0x40;
  DAT_0003c00a = 0xaa;
  write_byte_to_ram_and_call_two_routines(9,0xaa);
  DAT_0003c00b = DAT_0003c00b & 0xce | 0x20;
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  DAT_0003c00c = 0;
  write_masked_field_and_call_two_routines(0x1b,0);
  write_masked_field_and_call_two_routines(0xf,0x18);
  update_ram_byte_bits(0x1f);
  bRam00000000 = bRam00000000 & 0xbf | 0xc;
  busy_wait_on_mode_flag(0x1ae);
  bRam00000000 = bRam00000000 | 0x40;
  return;
}
