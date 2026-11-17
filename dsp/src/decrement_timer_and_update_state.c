/* @k10d decrement_timer_and_update_state @ 0x000efa8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Decrements a counter and adjusts a secondary value based on comparisons with stored
 *   limits, transitioning state flags when the counter reaches zero.
 * summary:
 *   The function decrements _DAT_0003c1fc. If specific conditions are met (DAT_0003c1fe ==
 *   4), it compares DAT_0003f3e2 against _DAT_0003c1fc and DAT_0003f3c4 to increment or
 *   decrement DAT_0003c1ff, storing results in _DAT_0000014a and _DAT_0000014c. When
 *   _DAT_0003c1fc reaches 0, it branches on DAT_0003c1fe (2, 4, or 5) to call helper
 *   functions and update state flags like DAT_0003c1fe and DAT_0003c1eb.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void decrement_timer_and_update_state(void)

{
  _DAT_0003c1fc = _DAT_0003c1fc - 1;
  if ((DAT_0003f3e2 != 0) && (DAT_0003c1fe == '\x04')) {
    if ((uint)DAT_0003f3e2 * 2 < (uint)DAT_0003f3c4) {
      if (DAT_0003f3e2 < _DAT_0003c1fc) {
        if (1 < DAT_0003c1ff) {
          DAT_0003c1ff = DAT_0003c1ff - 1;
          _DAT_0000014a = (ushort)DAT_0003f3e2;
          _DAT_0000014c = (ushort)DAT_0003c1ff;
        }
      }
      else if (_DAT_0003c1fc < DAT_0003f3e2) {
        DAT_0003c1ff = DAT_0003c1ff + 1;
        _DAT_0000014a = (ushort)DAT_0003f3e2;
        _DAT_0000014c = (ushort)DAT_0003c1ff;
      }
    }
    else if ((uint)((int)(uint)DAT_0003f3c4 >> 1) < (uint)_DAT_0003c1fc) {
      if (1 < DAT_0003c1ff) {
        DAT_0003c1ff = DAT_0003c1ff - 1;
        _DAT_0000014a = (ushort)DAT_0003f3e2;
        _DAT_0000014c = (ushort)DAT_0003c1ff;
      }
    }
    else if ((uint)_DAT_0003c1fc < (uint)((int)(uint)DAT_0003f3c4 >> 1)) {
      DAT_0003c1ff = DAT_0003c1ff + 1;
      _DAT_0000014a = (ushort)DAT_0003f3e2;
      _DAT_0000014c = (ushort)DAT_0003c1ff;
    }
  }
  if (_DAT_0003c1fc == 0) {
    if (DAT_0003c1fe == '\x02') {
      if (DAT_0003f3da == '\0') {
        clear_bit2_of_dat_00000005();
      }
      else {
        FUN_000ed66c();
        copy_two_globals_and_set_flag();
        _DAT_0003c1fc = 0;
      }
      DAT_0003c1fe = '\x03';
    }
    else if (DAT_0003c1fe == '\x04') {
      DAT_00000425 = DAT_00000425 & 0xe7;
      clear_bit_23_after_call();
      _DAT_0003c1fc = (ushort)DAT_0003f3c5;
      DAT_0003c1fe = '\x05';
    }
    else if (DAT_0003c1fe == '\x05') {
      DAT_0003c1eb = DAT_0003c1eb & 0xfb;
      DAT_0003c1e7 = DAT_0003c1e7 & 0xcf | 4;
      DAT_0003c1fe = '\x06';
    }
  }
  return;
}
