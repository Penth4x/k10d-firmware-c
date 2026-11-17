/* @k10d adjust_value_if_flag_set @ 0x000f730a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Subtracts the result of FUN_000f7078 from DAT_0003cc6a into DAT_0003ce40 when bit 6 of
 *   DAT_0003c128 is set.
 * summary:
 *   Checks bit 6 (0x40) of the global DAT_0003c128. If set, it calls FUN_000f7078, stores
 *   the return value in DAT_0003ce40, then overwrites DAT_0003ce40 with the difference
 *   between DAT_0003cc6a and that return value. If the bit is clear, the function returns
 *   without modifying DAT_0003ce40. The roles of the involved globals and the callee are
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_value_if_flag_set(void)

{
  short sVar1;
  
  sVar1 = _DAT_0003cc6a;
  if ((DAT_0003c128 & 0x40) != 0) {
    _DAT_0003ce40 = FUN_000f7078();
    _DAT_0003ce40 = sVar1 - _DAT_0003ce40;
  }
  return;
}
