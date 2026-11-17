/* @k10d call_single_function_with_global @ 0x000ce572
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls FUN_000d04ba passing the global DAT_0003ce40 as its sole argument.
 * summary:
 *   This function is a one-line wrapper that invokes FUN_000d04ba with the value of
 *   DAT_0003ce40. No other operations, side effects, or state changes are visible in the
 *   pseudocode. The role of the callee and the global is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_single_function_with_global(void)

{
  FUN_000d04ba(_DAT_0003ce40);
  return;
}
