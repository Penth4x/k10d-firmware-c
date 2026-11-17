/* @k10d set_flag_and_call_helper_000e9e08 @ 0x000e9e08
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes 0xd to DAT_0003c217 and then calls FUN_000e9e28.
 * summary:
 *   The function sets the global DAT_0003c217 to the value 0xd and immediately invokes
 *   FUN_000e9e28. No other operations, MMIO accesses, or kernel primitives are visible in
 *   the pseudocode. The role of DAT_0003c217 and FUN_000e9e28 is not determinable from the
 *   given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_000e9e08(void)

{
  DAT_0003c217 = 0xd;
  FUN_000e9e28();
  return;
}
