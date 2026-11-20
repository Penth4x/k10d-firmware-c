/* @k10d wait_for_status_flag @ 0x000ef872
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls a status flag in DAT_0003c1e7 while managing a countdown timer and calling
 *   periodic maintenance routines.
 * summary:
 *   The function clears bit 3 of DAT_0003c1ea and conditionally sets bit 5. It then enters
 *   a loop that waits for bit 2 of DAT_0003c1e7 to be set. During the wait, it decrements a
 *   counter (DAT_0003c1f8), increments other counters, and calls process_state_machine.
 *   Every 5 iterations, it calls update_global_state_flags with a 1000 argument. The loop
 *   also includes a busy-wait on bit 2 of DAT_0000004f. Finally, it calls
 *   copy_and_send_two_values and adjust_value_by_flag_bits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_status_flag(void)

{
  char cVar1;
  
  cVar1 = '\0';
  DAT_0003c1ea = DAT_0003c1ea & 0xdf;
  if ((DAT_0003c1eb & 4) != 0) {
    DAT_0003c1ea = DAT_0003c1ea | 0x20;
    run_timed_polling_loop();
  }
  initialize_state_flags_and_counters();
  if (((DAT_0003c02f & 1) == 0) || ((DAT_0003c1ea & 1) != 0)) {
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      _DAT_000000d8 = CONCAT31(_DAT_000000d8,0x13);
      _DAT_0003c26c = _DAT_000000d8 << 2;
      update_global_state_flags(__frv_reg_unset(4));
      busy_wait_on_mode_flag(200);
    }
    while ((DAT_0003c1e7 & 4) == 0) {
      _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
      if (DAT_0003c1fe < 4) {
        _DAT_0003c1fa = _DAT_0003c1fa + 1;
      }
      if ((DAT_0003c1fe == 2) || (DAT_0003c1fe == 3)) {
        DAT_0003c200 = DAT_0003c200 + '\x01';
      }
      _DAT_0003c1f8 = _DAT_0003c1f8 + -1;
      if (_DAT_0003c1f8 == 0) {
        FUN_000ed66c();
        DAT_0003c1e7 = DAT_0003c1e7 | 0x24;
      }
      process_state_machine();
      if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
         (cVar1 = cVar1 + '\x01', cVar1 == '\x05')) {
        cVar1 = '\0';
        update_global_state_flags(1000);
      }
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
    }
    if ((DAT_0003c1ed & 0x80) == 0) {
      copy_and_send_two_values();
    }
    adjust_value_by_flag_bits();
  }
  return;
}
