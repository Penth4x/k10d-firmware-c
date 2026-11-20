/* @k10d configure_seven_control_registers @ 0x000d80a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets specific bit fields in a series of control registers and calls associated handler
 *   functions for each.
 * summary:
 *   The function modifies bits in DAT_00000004 and DAT_0000000b, then iterates through
 *   seven distinct configurations. For each, it sets a unique 2-bit value in DAT_00000004,
 *   copies data from DAT_00000082/88 to a corresponding location in the 0x3c640-0x3c65e
 *   range, and calls a specific handler function (e.g.,
 *   wait_and_set_status_flags_000d82ce). It also calls busy_wait_on_mode_flag with
 *   arguments 0x75 and 0x46, and waits for bit 3 of DAT_00000004 to clear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_seven_control_registers(void)

{
  DAT_0000000b = DAT_0000000b & 0xfd | 1;
  DAT_00000004 = DAT_00000004 & 0x8f | 0x30;
  initialize_three_byte_state();
  DAT_0000013e = DAT_0000013e | 0xc0;
  DAT_00000006 = DAT_00000006 | 0x40;
  busy_wait_on_mode_flag(0x75);
  do {
  } while ((DAT_00000004 & 8) != 0);
  wait_and_toggle_status_flags();
  DAT_00000004 = DAT_00000004 & 0x8f | 0x10;
  _DAT_0003c64c = _DAT_00000082;
  _DAT_0003c64e = _DAT_00000088;
  wait_and_set_status_flags_000d82ce();
  DAT_00000004 = DAT_00000004 & 0x8f;
  _DAT_0003c644 = _DAT_00000082;
  _DAT_0003c646 = _DAT_00000088;
  wait_and_set_status_flags_000d826e();
  DAT_00000004 = DAT_00000004 & 0x8f | 0x20;
  _DAT_0003c640 = _DAT_00000082;
  _DAT_0003c642 = _DAT_00000088;
  wait_and_set_status_flags_000d832e();
  DAT_00000004 = DAT_00000004 & 0x8f | 0x60;
  _DAT_0003c648 = _DAT_00000082;
  _DAT_0003c64a = _DAT_00000088;
  wait_and_set_status_flags_000d84ae();
  DAT_00000004 = DAT_00000004 & 0x8f | 0x40;
  _DAT_0003c658 = _DAT_00000082;
  _DAT_0003c65a = _DAT_00000088;
  wait_and_set_status_flags_000d83ee();
  DAT_00000004 = DAT_00000004 & 0x8f | 0x50;
  _DAT_0003c650 = _DAT_00000082;
  _DAT_0003c652 = _DAT_00000088;
  wait_and_set_status_flags_000d844e();
  _DAT_0003c654 = _DAT_00000082;
  _DAT_0003c656 = _DAT_00000088;
  DAT_0000013a = 0x10;
  DAT_0000013c = 6;
  DAT_00000004 = DAT_00000004 & 0x8f | 0x70;
  busy_wait_on_mode_flag(0x46);
  FUN_000d850e();
  DAT_00000004 = DAT_00000004 & 0x8f | 0x30;
  _DAT_0003c65c = _DAT_00000082;
  _DAT_0003c65e = _DAT_00000088;
  DAT_0000000b = DAT_0000000b & 0xfc;
  return;
}
