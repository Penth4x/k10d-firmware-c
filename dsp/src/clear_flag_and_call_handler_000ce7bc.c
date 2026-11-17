/* @k10d clear_flag_and_call_handler_000ce7bc @ 0x000ce7bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears three adjacent globals and calls FUN_000d5fe6 when a specific combination of
 *   flag bits is met.
 * summary:
 *   Checks a complex condition involving bits in DAT_0003c066, DAT_0003c395, DAT_0003c022,
 *   and the values of _DAT_0003ce84/_DAT_0003ce86. If the condition is true, it zeroes
 *   _DAT_0003ce82, _DAT_0003ce84, and _DAT_0003ce86, then invokes FUN_000d5fe6. The role of
 *   the globals and the callee is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_flag_and_call_handler_000ce7bc(void)

{
  if (((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) &&
     (((DAT_0003c022 & 1) == 0 || ((_DAT_0003ce86 == 0 && (_DAT_0003ce84 != 0)))))) {
    _DAT_0003ce82 = 0;
    _DAT_0003ce84 = 0;
    _DAT_0003ce86 = 0;
    FUN_000d5fe6();
  }
  return;
}
