/* @k10d or_bytes_into_four_globals_000f6a7a @ 0x000f6a7a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   ORs four byte parameters into four separate global byte variables.
 * summary:
 *   The function takes four byte arguments and performs a bitwise OR assignment on each
 *   with a distinct global variable (DAT_0003c4b2, DAT_0003c4b6, DAT_0003c4ba,
 *   DAT_0003c4be). It has no callees and no other side effects. The role of these globals
 *   is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void or_bytes_into_four_globals_000f6a7a(byte param_1,byte param_2,byte param_3,byte param_4)

{
  DAT_0003c4b2 = DAT_0003c4b2 | param_1;
  DAT_0003c4b6 = DAT_0003c4b6 | param_2;
  DAT_0003c4ba = DAT_0003c4ba | param_3;
  DAT_0003c4be = DAT_0003c4be | param_4;
  return;
}
