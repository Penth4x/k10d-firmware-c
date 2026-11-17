/* @k10d negate_value_if_flag_set @ 0x000f732c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Negates the result of FUN_000f7078 and stores it in DAT_0003ce40 if bit 6 of
 *   DAT_0003c128 is set.
 * summary:
 *   Checks bit 6 (0x40) of the global flag word DAT_0003c128. If set, it calls
 *   FUN_000f7078, negates the returned value, and writes the result to DAT_0003ce40. If the
 *   flag is clear, the function returns without modifying DAT_0003ce40. The specific roles
 *   of the globals and the callee are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void negate_value_if_flag_set(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    _DAT_0003ce40 = FUN_000f7078();
    _DAT_0003ce40 = -_DAT_0003ce40;
  }
  return;
}
