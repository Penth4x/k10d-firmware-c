/* @k10d decrement_state_timer @ 0x000eb572
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Decments a 16-bit counter and updates a secondary counter based on a state machine
 *   mode.
 * summary:
 *   The function decrements the global variable _DAT_0003c1fc. If the state variable
 *   DAT_0003c1fe is 4, it adjusts DAT_0003c1ff based on the relationship between
 *   _DAT_0003c1fc and DAT_0003f3dc. When _DAT_0003c1fc reaches 0, it triggers state
 *   transitions: calling clear_bit2_of_dat_00000005 for state 2, or clearing a bit in
 *   DAT_00000425 and calling clear_bit_23_after_call for state 4, while setting state to 6
 *   and setting bit 2 of DAT_0003c1e7.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void decrement_state_timer(void)

{
  _DAT_0003c1fc = _DAT_0003c1fc - 1;
  if ((DAT_0003f3dc != 0) && (DAT_0003c1fe == '\x04')) {
    if (DAT_0003f3dc < _DAT_0003c1fc) {
      if (1 < DAT_0003c1ff) {
        DAT_0000014c = DAT_0003c1ff - 1;
        DAT_0000014a = DAT_0003f3dc;
        DAT_0003c1ff = DAT_0000014c;
      }
    }
    else if (_DAT_0003c1fc < DAT_0003f3dc) {
      DAT_0000014c = DAT_0003c1ff + 1;
      DAT_0000014a = DAT_0003f3dc;
      DAT_0003c1ff = DAT_0000014c;
    }
  }
  if (_DAT_0003c1fc == 0) {
    if (DAT_0003c1fe == '\x02') {
      clear_bit2_of_dat_00000005();
      DAT_0003c1fe = '\x03';
    }
    else if (DAT_0003c1fe == '\x04') {
      DAT_00000425 = DAT_00000425 & 0xef;
      clear_bit_23_after_call();
      _DAT_0003c1fc = (ushort)DAT_0003f3c2;
      DAT_0003c1fe = '\x06';
      DAT_0003c1e7 = DAT_0003c1e7 | 4;
    }
    else if (DAT_0003c1fe == '\x05') {
      DAT_0003c1fe = '\x06';
      DAT_0003c1e7 = DAT_0003c1e7 | 4;
    }
  }
  return;
}
