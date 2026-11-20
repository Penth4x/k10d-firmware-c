/* @k10d wait_for_exit_condition @ 0x000ec594
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Loops until a termination flag is set, calling periodic handlers and a timeout routine.
 * summary:
 *   The function initializes a counter and enters an infinite loop. It checks status bits
 *   in DAT_0003c396 and DAT_0003f3e1 to decide between calling
 *   call_subroutine_with_mode_delay or waiting on DAT_00000057 and calling
 *   initialize_state_block/update_status_flags_and_counters_000de274. It increments the
 *   counter each iteration and exits if DAT_00000001 bit 2 is set or if the counter exceeds
 *   0x275, at which point it calls clear_bit_in_dat_0003c00b.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_exit_condition(void)

{
  _DAT_0003c1e8 = 0;
  while( true ) {
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      do {
      } while ((DAT_00000057 & 4) == 0);
      DAT_00000057 = DAT_00000057 & 0xfb;
      if ((DAT_0003c1ed & 0x10) == 0) {
        if (_DAT_0003c1e8 == 0x275) {
          set_two_byte_state_flags();
        }
        initialize_state_block(1000);
      }
      else {
        update_status_flags_and_counters_000de274(1000);
      }
    }
    else {
      call_subroutine_with_mode_delay();
    }
    if ((DAT_00000001 & 4) != 0) break;
    _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
    if (0x275 < _DAT_0003c1e8) {
LAB_000ec61c:
      clear_bit_in_dat_0003c00b();
      return;
    }
  }
  DAT_0003c1eb = DAT_0003c1eb & 0xf7;
  goto LAB_000ec61c;
}
