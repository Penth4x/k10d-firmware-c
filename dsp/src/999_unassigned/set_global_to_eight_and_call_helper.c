/* @k10d set_global_to_eight_and_call_helper @ 0x000e9df8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes the constant 8 to DAT_0003c217 and then calls FUN_000e9e28.
 * summary:
 *   The function sets the global variable DAT_0003c217 to the value 8. It then invokes the
 *   callee FUN_000e9e28. No other side effects or arguments are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_global_to_eight_and_call_helper(void)

{
  DAT_0003c217 = 8;
  FUN_000e9e28();
  return;
}
