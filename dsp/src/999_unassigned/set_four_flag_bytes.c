/* @k10d set_four_flag_bytes @ 0x000f6aa8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   ORs four input bytes into four separate global byte variables.
 * summary:
 *   The function takes four byte parameters and performs a bitwise OR assignment on four
 *   distinct global variables (DAT_0003c4b3, DAT_0003c4b7, DAT_0003c4bb, DAT_0003c4bf). It
 *   has no callees and no other side effects. The role of these global variables is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_four_flag_bytes(byte param_1,byte param_2,byte param_3,byte param_4)

{
  DAT_0003c4b3 = DAT_0003c4b3 | param_1;
  DAT_0003c4b7 = DAT_0003c4b7 | param_2;
  DAT_0003c4bb = DAT_0003c4bb | param_3;
  DAT_0003c4bf = DAT_0003c4bf | param_4;
  return;
}
