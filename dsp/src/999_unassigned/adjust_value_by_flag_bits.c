/* @k10d adjust_value_by_flag_bits @ 0x000ef97a
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Computes a value via divide_two_integers, adds 0x1a or 0x40 based on flag bits, and
 *   clears bit 3 of DAT_0003c1ea.
 * summary:
 *   Calls FUN_000ed66c, then stores divide_two_integers(_DAT_0003c1e8,5) into
 *   _DAT_0003c1f2. Adds 0x1a if DAT_0003c447 or DAT_0003c44a is 1 or bit 5 of DAT_0003c4d0
 *   is set, otherwise adds 0x40. Calls write_masked_field_and_call_two_routines(0xf,0) and
 *   clears bit 3 of DAT_0003c1ea.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_value_by_flag_bits(void)

{
  FUN_000ed66c();
  _DAT_0003c1f2 = divide_two_integers(_DAT_0003c1e8,5);
  if (((DAT_0003c447 == '\x01') || (DAT_0003c44a == '\x01')) || ((DAT_0003c4d0 & 0x20) != 0)) {
    _DAT_0003c1f2 = _DAT_0003c1f2 + 0x1a;
  }
  else {
    _DAT_0003c1f2 = _DAT_0003c1f2 + 0x40;
  }
  write_masked_field_and_call_two_routines(0xf,0);
  DAT_0003c1ea = DAT_0003c1ea & 0xdf;
  return;
}
