/* @k10d wait_for_status_bit_clear_000e94a2 @ 0x000e94a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls a status flag in DAT_00000001 until bit 2 is cleared, performing periodic
 *   register writes and delays in the loop.
 * summary:
 *   The function initializes several registers via write_byte_to_ram_and_call_two_routines
 *   and write_masked_field_and_call_two_routines, then enters a while loop that checks if
 *   bit 2 of DAT_00000001 is zero. Inside the loop, it calls delay functions
 *   (busy_wait_on_mode_flag, FUN_000d5642) and updates control registers based on the value
 *   of (DAT_0003c004 & 0x7f) >> 4. The loop exits when the status bit is cleared.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_status_bit_clear_000e94a2(void)

{
  write_byte_to_ram_and_call_two_routines(7,DAT_0003c008 | 4);
  busy_wait_on_mode_flag(100);
  write_masked_field_and_call_two_routines(0x18,DAT_0003c009 | 0x20);
  write_masked_field_and_call_two_routines(0x17,0xf0);
  write_masked_field_and_call_two_routines(0x17,0xc0);
  write_masked_field_and_call_two_routines(0x17,0);
  DAT_00000003 = DAT_00000003 & 0x6f;
  DAT_00000403 = DAT_00000403 | 0x90;
  while ((DAT_00000001 & 4) == 0) {
    FUN_000d5642(0x31);
    write_byte_to_ram_and_call_two_routines(7,DAT_0003c008 | 4);
    busy_wait_on_mode_flag(0x32);
    write_nibble_to_ram_region(0x14);
    DAT_00000003 = DAT_00000003 & 0x6f;
    write_masked_field_and_call_two_routines(0x1a,DAT_0003c00b & 0xdf);
    write_byte_to_ram_and_call_two_routines(7,0xc0);
    write_byte_to_ram_and_call_two_routines(7,0);
    switch((DAT_0003c004 & 0x7f) >> 4) {
    case 0:
      DAT_00000003 = DAT_00000003 | 0x90;
      break;
    case 1:
      DAT_00000003 = DAT_00000003 | 0x10;
      break;
    case 2:
      write_masked_field_and_call_two_routines(0x1a,DAT_0003c00b | 0x20);
      break;
    case 3:
      write_masked_field_and_call_two_routines(0x1a,DAT_0003c00b | 0x20);
      write_byte_to_ram_and_call_two_routines(7,200);
      break;
    case 4:
      DAT_00000003 = DAT_00000003 | 0x80;
      break;
    case 6:
      write_byte_to_ram_and_call_two_routines(7,200);
      break;
    case 7:
      DAT_00000003 = DAT_00000003 | 0x90;
      write_masked_field_and_call_two_routines(0x1a,DAT_0003c00b | 0x20);
      write_byte_to_ram_and_call_two_routines(7,200);
    }
  }
  return;
}
