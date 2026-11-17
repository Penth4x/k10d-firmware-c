/* @k10d update_byte_flags_and_counters @ 0x000cc996
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates several byte-sized global variables by clamping a counter and manipulating
 *   specific bit flags.
 * summary:
 *   The function clamps the global _DAT_0003ce24 to a minimum of 0xf. It stores param_1
 *   into _DAT_000000d4 and computes a sum into DAT_000000e6. It then performs a series of
 *   bitwise operations on DAT_000000ef and DAT_000000d7, clearing and setting specific bits
 *   based on the state of _DAT_0003ce01. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_byte_flags_and_counters(uint16_t param_1)

{
  byte bVar1;
  
  if (_DAT_0003ce24 < 0xf) {
    _DAT_0003ce24 = 0xf;
  }
  _DAT_000000d4 = param_1;
  DAT_000000e6 = (char)param_1 + (char)_DAT_0003ce24;
  DAT_000000e4 = (char)_DAT_0003ce2a;
  bVar1 = DAT_000000ef & 0xbf;
  if (((DAT_0003ce01 & 2) == 0) ||
     (DAT_000000ef = DAT_000000ef & 0x3f, bVar1 = DAT_000000ef, (DAT_0003ce01 & 4) != 0)) {
    DAT_000000ef = bVar1;
    DAT_000000ef = DAT_000000ef | 2;
  }
  DAT_000000d7 = DAT_000000d7 & 0xef;
  return;
}
