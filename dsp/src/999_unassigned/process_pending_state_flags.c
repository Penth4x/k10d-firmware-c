/* @k10d process_pending_state_flags @ 0x000e3512
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks and clears bits in DAT_0003c333 and DAT_0003c41d to trigger corresponding
 *   handler functions.
 * summary:
 *   The function acts as a dispatcher for state changes, testing specific bits in
 *   DAT_0003c333 (bits 3, 4, 5) and DAT_0003c41d (bits 0, 5). When a bit is set, it clears
 *   the bit and calls a specific handler (e.g., FUN_000d6144,
 *   write_two_bit_field_to_dat_0003c008). It also updates status flags in DAT_0003c038 and
 *   DAT_0003c086 based on the value of DAT_0003c3ee and calls several other functions
 *   (branch_on_state_byte, update_value_if_flags_set, update_bit1_of_0x3c00a)
 *   unconditionally at the end.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_pending_state_flags(void)

{
  if ((DAT_0003c333 & 8) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xf7;
    FUN_000d6144();
    if (DAT_0003c3ed == '\x01') {
      DAT_0003c3ed = '\0';
      if ((DAT_0003c023 & 1) == 0) {
        check_and_set_flag_bit2_000e3bd0();
        DAT_0003c041 = 0;
      }
      DAT_0003c41d = DAT_0003c41d & 0xdf;
    }
  }
  if ((DAT_0003c333 & 0x10) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xef;
    FUN_000d614e();
  }
  if ((DAT_0003c333 & 0x20) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xdf;
    FUN_000d6158();
  }
  if ((DAT_0003c41d & 1) == 0) {
    DAT_0003c038 = DAT_0003c038 & 0xe7;
    DAT_0003c086 = DAT_0003c086 & 0xfe;
  }
  else {
    if (DAT_0003c3ee == 3) {
      DAT_0003c038 = DAT_0003c038 | 8;
      clear_bit7_of_dat_00000006();
      DAT_00000006 = DAT_00000006 & 0xbf;
    }
    else {
      DAT_0003c038 = DAT_0003c038 & 0xf7;
      update_bit7_from_dat_0003c00f();
      DAT_00000006 = DAT_00000006 | 0x40;
    }
    if ((DAT_0003c3ee < 10) || (0x15 < DAT_0003c3ee)) {
      DAT_0003c038 = DAT_0003c038 & 0xef;
    }
    else {
      DAT_0003c038 = DAT_0003c038 | 0x10;
    }
    if (DAT_0003c3ee == 2) {
      DAT_0003c086 = DAT_0003c086 | 1;
      DAT_0003c00a = DAT_0003c00a | 2;
      write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
    }
    else {
      DAT_0003c086 = DAT_0003c086 & 0xfe;
      DAT_0003c00a = DAT_0003c00a & 0xfd;
      write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
    }
  }
  if ((DAT_0003c41d & 0x20) != 0) {
    if (DAT_0003c3ed == '\x02') {
      write_two_bit_field_to_dat_0003c008(2);
    }
    else {
      DAT_0003c41d = DAT_0003c41d & 0xdf;
      write_two_bit_field_to_dat_0003c008(0);
    }
  }
  branch_on_state_byte();
  update_value_if_flags_set();
  if ((DAT_0003c038 & 0x10) == 0) {
    if ((DAT_0003c023 & 1) == 0) {
      handle_15bit_event_code(*(uint16_t *)(&DAT_000fc5e0 + (uint)DAT_0003c467 * 2));
    }
  }
  else {
    process_flag_0x10_event();
  }
  update_bit1_of_0x3c00a();
  return;
}
