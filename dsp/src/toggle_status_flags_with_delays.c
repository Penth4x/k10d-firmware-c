/* @k10d toggle_status_flags_with_delays @ 0x000ef0cc
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Sets and clears specific bits in multiple status registers based on conditions in
 *   DAT_0003c003-0003c005, with timed delays between phases.
 * summary:
 *   The function first calls configure_timer_channels and clears bit 6 of DAT_00000405. It
 *   then calls write_masked_field_and_call_two_routines and write_nibble_to_ram_region,
 *   followed by a 100-unit delay via busy_wait_on_mode_flag. It sets bits in DAT_00000004,
 *   DAT_00000001, and bRam00000000 based on the state of bits in DAT_0003c003,
 *   DAT_0003c004, and DAT_00000005. After a 500-unit delay, it clears the same bits it just
 *   set, followed by a 120-unit delay. The pattern suggests a pulse or handshake sequence
 *   on status/control flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_status_flags_with_delays(void)

{
  configure_timer_channels();
  DAT_00000405 = DAT_00000405 & 0xbf;
  write_masked_field_and_call_two_routines(7,DAT_0003c008 | 4);
  busy_wait_on_mode_flag(100);
  write_nibble_to_ram_region(0x14);
  clear_low_nibble_and_write();
  if ((DAT_0003c003 & 0x10) == 0) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  if ((DAT_0003c003 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  if ((DAT_0003c003 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  if ((DAT_0003c003 & 0x80) != 0) {
    DAT_00000001 = DAT_00000001 | 8;
  }
  if ((DAT_0003c004 & 0x10) == 0) {
    DAT_00000001 = DAT_00000001 | 0x10;
  }
  if ((DAT_0003c004 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 | 0x40;
  }
  if ((DAT_0003c004 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 | 0x80;
  }
  if ((DAT_00000005 & 0x40) == 0) {
    bRam00000000 = bRam00000000 | 0x80;
  }
  busy_wait_on_mode_flag(500);
  if ((DAT_0003c003 & 0x10) == 0) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  if ((DAT_0003c003 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  if ((DAT_0003c003 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  if ((DAT_0003c003 & 0x80) != 0) {
    DAT_00000001 = DAT_00000001 & 0xf7;
  }
  if ((DAT_0003c004 & 0x10) == 0) {
    DAT_00000001 = DAT_00000001 & 0xef;
  }
  if ((DAT_0003c004 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 & 0xbf;
  }
  if ((DAT_0003c004 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 & 0x7f;
  }
  if ((DAT_00000005 & 0x40) == 0) {
    bRam00000000 = bRam00000000 & 0x7f;
  }
  busy_wait_on_mode_flag(0x78);
  return;
}
