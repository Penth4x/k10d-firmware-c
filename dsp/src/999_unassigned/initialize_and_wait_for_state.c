/* @k10d initialize_and_wait_for_state @ 0x000edef8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Initializes a 1024-entry buffer, counts valid entries, and waits for a specific bit in
 *   a status register.
 * summary:
 *   The function first clears a counter and a flag bit in a global variable. It then
 *   iterates 1024 times, calling check_and_run_two_routines with an incrementing index and
 *   a constant value 0xa55a. It performs a second 1024-iteration loop, calling FUN_000e9fd2
 *   and incrementing a counter if the result is not -0x5aa6. Finally, it calls
 *   toggle_bit7_with_delay five times, sets bit 7 of DAT_0000000a, and enters two busy-wait
 *   loops polling bit 2 of DAT_00000005 while calling toggle_bit7_with_delay, finally
 *   clearing bit 7 of DAT_0000000a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_and_wait_for_state(void)

{
  byte bVar1;
  
  _DAT_0003c1e8 = 0;
  bRam00000000 = bRam00000000 & 0x7f;
  _DAT_0003c21a = 0;
  do {
    check_and_run_two_routines(_DAT_0003c21a,0xa55a);
    _DAT_0003c21a = _DAT_0003c21a + 1;
  } while (_DAT_0003c21a < 0x400);
  _DAT_0003c21a = 0;
  do {
    _DAT_0003c21e = FUN_000e9fd2(_DAT_0003c21a);
    if (_DAT_0003c21e != -0x5aa6) {
      _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
    }
    _DAT_0003c21a = _DAT_0003c21a + 1;
  } while (_DAT_0003c21a < 0x400);
  bVar1 = 0;
  do {
    toggle_bit7_with_delay();
    bVar1 = bVar1 + 1;
  } while (bVar1 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_bit7_with_delay();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_bit7_with_delay();
  }
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
