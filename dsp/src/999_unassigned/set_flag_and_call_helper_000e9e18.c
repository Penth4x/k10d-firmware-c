/* @k10d set_flag_and_call_helper_000e9e18 @ 0x000e9e18
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes 0xc to DAT_0003c217 and then calls FUN_000e9e28.
 * summary:
 *   The function sets the global DAT_0003c217 to the value 0xc and immediately invokes
 *   FUN_000e9e28. No other operations, branches, or side effects are visible in the
 *   pseudocode. The role of DAT_0003c217 and FUN_000e9e28 is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_000e9e18(void)

{
  DAT_0003c217 = 0xc;
  FUN_000e9e28();
  return;
}
