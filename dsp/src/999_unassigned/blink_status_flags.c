/* @k10d blink_status_flags @ 0x000ef260
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Sets and clears specific bits in global status variables with timed delays between
 *   states.
 * summary:
 *   The function initializes state via configure_timer_channels and
 *   write_masked_field_and_call_two_routines, then conditionally sets bits in DAT_00000001,
 *   DAT_00000004, and bRam00000000 based on flags in DAT_0003c003, DAT_0003c004, and
 *   DAT_00000005. It calls busy_wait_on_mode_flag with delay values (100, 500, 0x78) to
 *   create a timed sequence where the bits are set, held, and then cleared, suggesting a
 *   blinking or pulsing indicator behavior.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void blink_status_flags(void)

{
  configure_timer_channels();
  DAT_00000405 = DAT_00000405 & 0xbf;
  write_masked_field_and_call_two_routines(7,DAT_0003c008 | 4);
  busy_wait_on_mode_flag(100);
  write_nibble_to_ram_region(0x14);
  clear_low_nibble_and_write();
  if ((DAT_0003c003 & 0x10) != 0) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  if ((DAT_0003c003 & 0x20) == 0) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  if ((DAT_0003c003 & 0x40) != 0) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  if ((DAT_0003c003 & 0x80) == 0) {
    DAT_00000001 = DAT_00000001 | 8;
  }
  if ((DAT_0003c004 & 0x10) != 0) {
    DAT_00000001 = DAT_00000001 | 0x10;
  }
  if ((DAT_0003c004 & 0x20) == 0) {
    DAT_00000001 = DAT_00000001 | 0x40;
  }
  if ((DAT_0003c004 & 0x40) != 0) {
    DAT_00000001 = DAT_00000001 | 0x80;
  }
  if ((DAT_00000005 & 0x40) != 0) {
    bRam00000000 = bRam00000000 | 0x80;
  }
  busy_wait_on_mode_flag(500);
  if ((DAT_0003c003 & 0x10) != 0) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  if ((DAT_0003c003 & 0x20) == 0) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  if ((DAT_0003c003 & 0x40) != 0) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  if ((DAT_0003c003 & 0x80) == 0) {
    DAT_00000001 = DAT_00000001 & 0xf7;
  }
  if ((DAT_0003c004 & 0x10) != 0) {
    DAT_00000001 = DAT_00000001 & 0xef;
  }
  if ((DAT_0003c004 & 0x20) == 0) {
    DAT_00000001 = DAT_00000001 & 0xbf;
  }
  if ((DAT_0003c004 & 0x40) != 0) {
    DAT_00000001 = DAT_00000001 & 0x7f;
  }
  if ((DAT_00000005 & 0x40) != 0) {
    bRam00000000 = bRam00000000 & 0x7f;
  }
  busy_wait_on_mode_flag(0x78);
  return;
}
