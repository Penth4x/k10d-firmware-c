/* @k10d update_four_byte_flags @ 0x000f6b32
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Masks and ORs four byte parameters into four global byte variables.
 * summary:
 *   The function takes four byte parameters and updates four global variables
 *   (DAT_0003c4b1, DAT_0003c4b5, DAT_0003c4b9, DAT_0003c4bd). For the first, second, and
 *   fourth variables, it clears bits 0-6 (mask 199/0xc7) and sets them to the corresponding
 *   parameter. For the third variable, it clears bits 0-5 (mask 0xc2) and sets them to the
 *   third parameter. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_four_byte_flags(byte param_1,byte param_2,byte param_3,byte param_4)

{
  DAT_0003c4b1 = DAT_0003c4b1 & 199 | param_1;
  DAT_0003c4b5 = DAT_0003c4b5 & 199 | param_2;
  DAT_0003c4b9 = DAT_0003c4b9 & 0xc2 | param_3;
  DAT_0003c4bd = DAT_0003c4bd & 199 | param_4;
  return;
}
