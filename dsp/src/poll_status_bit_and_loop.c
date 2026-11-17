/* @k10d poll_status_bit_and_loop @ 0x000e91be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks a bit in a global flag, and if clear, runs a nested polling loop calling various
 *   subroutines until the bit is set.
 * summary:
 *   The function tests bit 24 of uRam00000000. If clear, it initializes several globals and
 *   enters a loop that repeatedly calls set_flag_and_write_two_bytes and waits for bit 17
 *   of uRam00000000. It updates counters and calls busy_wait_on_mode_flag(100) in the inner
 *   loop. Returns 1 if the initial bit was clear, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_status_bit_and_loop(void)

{
  uint32_t uVar1;
  char cVar2;
  
  cVar2 = '\x01';
  if ((uRam00000000 & 0x1000000) == 0) {
    uRam00000000 = CONCAT13((char)uRam00000000,_DAT_00000001) | 0x66000000;
    DAT_00000400 = 0x7f;
    call_subroutine_with_arg_9();
    DAT_00000400 = DAT_00000400 & 0xfe;
    DAT_0000000a = DAT_0000000a | 1;
    DAT_0000040a = DAT_0000040a | 1;
    clear_state_flags_and_set_bit();
    process_state_flags_and_dispatch_000cb0c6();
    fill_four_bytes_with_pattern(0);
    dispatch_mode_transition_000dfc72(1,0);
    copy_and_mask_four_bytes();
    while ((uRam00000000 & 0x1000000) == 0) {
      DAT_00000400 = DAT_00000400 | 1;
      DAT_0000040a = DAT_0000040a & 0xfe;
      set_flag_and_write_two_bytes();
      DAT_00000006 = DAT_00000006 & 0xcf;
      while( true ) {
        set_flag_and_write_two_bytes();
        while ((uRam00000000 & 0x20000) == 0) {
          DAT_0003f3e1 = DAT_0003f3e1 | 0x80;
          run_state_machine_sequence();
          DAT_0003f3e1 = DAT_0003f3e1 & 0x7f;
          FUN_000d5642(0x1e);
        }
        FUN_000d5642(1);
        set_three_flag_bits_and_notify();
        cVar2 = cVar2 + '\x01';
        if (cVar2 == '\v') {
          cVar2 = '\0';
        }
        DAT_0003c21f = cVar2 + '\x04';
        FUN_000e8e52();
        DAT_00000400 = DAT_00000400 & 0xfe;
        DAT_0000040a = DAT_0000040a | 1;
        busy_wait_on_mode_flag(100);
        if ((uRam00000000 & 0x1000000) != 0) break;
        DAT_00000400 = DAT_00000400 | 1;
        DAT_0000040a = DAT_0000040a & 0xfe;
        FUN_000e92b6();
      }
    }
    copy_four_bytes_between_dat();
    clear_and_set_status_flags_000e9c42();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
