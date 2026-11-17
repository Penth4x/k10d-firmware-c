/* @k10d increment_counter_and_update_registers @ 0x000ee3e4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Increments a global counter, conditionally calls three sub-functions at specific
 *   values, and writes a sequence of values to a block of globals.
 * summary:
 *   The function increments _DAT_0003c1e8 and checks for values 5, 10, 15, and 20 to
 *   trigger calls to clear_bit3_of_dat_00000005, FUN_000ed6c8, and
 *   clear_bit_5_of_dat_00000005. It then performs two sets of bitwise OR and AND operations
 *   on globals DAT_00000003 through DAT_0000000c, calling busy_wait_on_mode_flag(0x1ef)
 *   after each set. The specific roles of the globals and callees are not determinable from
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void increment_counter_and_update_registers(void)

{
  _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
  if (_DAT_0003c1e8 == 5) {
    clear_bit3_of_dat_00000005();
  }
  if (_DAT_0003c1e8 == 10) {
    FUN_000ed6c8();
  }
  if (_DAT_0003c1e8 == 0xf) {
    clear_bit_5_of_dat_00000005();
  }
  if (_DAT_0003c1e8 == 0x14) {
    _DAT_0003c1e8 = 0;
    FUN_000ed6c8();
  }
  DAT_00000003 = DAT_00000006 | 0x54;
  DAT_00000004 = DAT_00000007 | 0x54;
  DAT_00000005 = DAT_00000008 | 4;
  DAT_00000006 = DAT_00000009 | 0x50;
  DAT_00000009 = (byte)(_DAT_0000000c >> 0x18) | 0x50;
  DAT_0000000a = DAT_0000000a | 0x20;
  _DAT_0000000c = CONCAT13((char)_DAT_0000000c,_DAT_0000000d) | 0x10000000/*ROM*/;
  busy_wait_on_mode_flag(0x1ef);
  DAT_00000003 = DAT_00000006 | 0xa8;
  DAT_00000004 = DAT_00000007 | 0x2a;
  DAT_00000005 = DAT_00000008 | 0xa0;
  DAT_00000006 = DAT_00000009 | 0xb0;
  DAT_00000009 = (byte)(_DAT_0000000c >> 0x18) | 0xa0;
  DAT_0000000a = DAT_0000000a & 0xdf;
  _DAT_0000000c = CONCAT13((char)_DAT_0000000c,_DAT_0000000d) | 0x8000000;
  busy_wait_on_mode_flag(0x1ef);
  return;
}
