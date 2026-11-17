/* @k10d write_config_constants_and_call_helper @ 0x000dd1b4
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * purpose:
 *   Writes a set of constant values to global data structures and conditionally calls a
 *   helper function.
 * summary:
 *   The function sets multiple global variables (DAT_0003f540 through DAT_0003f54f) to
 *   specific constant values. It modifies a flag in DAT_0003c80f. If a specific condition
 *   on DAT_0003f360 is met, it initializes a larger block of parameters in the
 *   0x0003f360-0x0003f3bb range and calls initialize_dat_0003f368_block. It calls
 *   initialize_dat_0003f368_block again if a specific bit in DAT_0003f362 is clear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_config_constants_and_call_helper(void)

{
  DAT_0003f540 = 7;
  DAT_0003f541 = 3;
  DAT_0003f542 = 0x28;
  DAT_0003f543 = 1;
  _DAT_0003f544 = 0x1498;
  _DAT_0003f546 = 0x1498;
  DAT_0003c80f = DAT_0003c80f & 0xfc | 1;
  DAT_0003f54f = 0xf;
  if (_DAT_0003f360 != 0x618) {
    DAT_0003f369 = 1;
    DAT_0003f362 = 0x14;
    DAT_0003f363 = 0xe0;
    _DAT_0003f370 = 0x194;
    _DAT_0003f372 = 0x1a6;
    _DAT_0003f378 = 0x200;
    _DAT_0003f37a = 0x200;
    _DAT_0003f37c = 0x200;
    _DAT_0003f380 = 0xff80;
    _DAT_0003f382 = 0x80;
    _DAT_0003f384 = 0xff80;
    _DAT_0003f386 = 0x80;
    DAT_0003f388 = 0x10;
    DAT_0003f389 = 0x80;
    DAT_0003f38a = 0x10;
    DAT_0003f38b = 0x80;
    DAT_0003f38c = 0x10;
    DAT_0003f38d = 0x80;
    _DAT_0003f3a0 = 0x900;
    _DAT_0003f3a2 = 0x1e00;
    _DAT_0003f3a4 = 0x133;
    _DAT_0003f3a6 = 0x900;
    _DAT_0003f3a8 = 0x1e00;
    _DAT_0003f3aa = 0x166;
    _DAT_0003f3ac = 0xa00;
    _DAT_0003f3ae = 0x1e00;
    _DAT_0003f38e = 0x166;
    _DAT_0003f364 = 0x100;
    _DAT_0003f366 = 0x100;
    _DAT_0003f374 = 0;
    _DAT_0003f376 = 0;
    DAT_0003f3b0 = 1;
    DAT_0003f3b1 = 0;
    DAT_0003f3ba = 1;
    DAT_0003f3bb = 0;
    DAT_0003f36d = 0;
    initialize_dat_0003f368_block();
  }
  if ((DAT_0003f362 & 8) == 0) {
    initialize_dat_0003f368_block();
  }
  return;
}
