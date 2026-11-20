/* @k10d increment_counter_and_toggle_flags @ 0x000ee14c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Increments a global counter, calls specific functions at thresholds 5, 10, 15, and 20,
 *   and toggles bits in several global variables.
 * summary:
 *   The function increments _DAT_0003c1e8 and invokes clear_bit1_of_dat_00000005,
 *   FUN_000ed66c, or clear_bit2_of_dat_00000005 when the counter reaches 5, 10, or 15
 *   respectively. At 20, it resets the counter to 0 and calls FUN_000ed66c. It then
 *   manipulates bits in bRam00000000 and several DAT_0000000x globals, calling
 *   busy_wait_on_mode_flag(0x1ef) twice during the process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void increment_counter_and_toggle_flags(void)

{
  _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
  if (_DAT_0003c1e8 == 5) {
    clear_bit1_of_dat_00000005();
  }
  if (_DAT_0003c1e8 == 10) {
    FUN_000ed66c();
  }
  if (_DAT_0003c1e8 == 0xf) {
    clear_bit2_of_dat_00000005();
  }
  if (_DAT_0003c1e8 == 0x14) {
    _DAT_0003c1e8 = 0;
    FUN_000ed66c();
  }
  bRam00000000 = bRam00000000 & 0x7f;
  DAT_00000001 = 0x51;
  _DAT_00000002 =
       CONCAT22((short)(CONCAT13((char)_DAT_00000002,_DAT_00000003) >> 0x10),(short)_DAT_00000002) |
       0x51000800;
  DAT_00000006 = DAT_00000006 | 0x10;
  _DAT_00000007 = CONCAT13((char)_DAT_00000007,_DAT_00000008) | 0x5000000;
  busy_wait_on_mode_flag(0x1ef);
  bRam00000000 = bRam00000000 | 0x80;
  DAT_00000001 = 0xaa;
  _DAT_00000002 =
       CONCAT22((short)(CONCAT13((char)_DAT_00000002,_DAT_00000003) >> 0x10),(short)_DAT_00000002) &
       0xfffff7ff | 0x2a000000;
  DAT_00000006 = DAT_00000006 & 0xef;
  _DAT_00000007 = CONCAT13((char)_DAT_00000007,_DAT_00000008) | 0xa000000;
  busy_wait_on_mode_flag(0x1ef);
  return;
}
