/* @k10d mask_four_byte_globals @ 0x000f6b04
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   ANDs four byte parameters into four consecutive global byte variables.
 * summary:
 *   The function takes four byte arguments and performs a bitwise AND with the globals at
 *   DAT_0003c4b0, DAT_0003c4b4, DAT_0003c4b8, and DAT_0003c4bc respectively. It has no
 *   callees and no other side effects. The role of these globals is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mask_four_byte_globals(byte param_1,byte param_2,byte param_3,byte param_4)

{
  DAT_0003c4b0 = DAT_0003c4b0 & param_1;
  DAT_0003c4b4 = DAT_0003c4b4 & param_2;
  DAT_0003c4b8 = DAT_0003c4b8 & param_3;
  DAT_0003c4bc = DAT_0003c4bc & param_4;
  return;
}
