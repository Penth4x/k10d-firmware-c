/* @k10d store_shifted_params_to_globals @ 0x000dca78
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Stores three parameters left-shifted by 8 bits into three global variables.
 * summary:
 *   The function takes three integer parameters and writes each, shifted left by 8 bits, to
 *   distinct global variables at 0x0003c830, 0x0003c834, and 0x0003c880. It performs no
 *   other operations and has no callees. The role of these globals is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_shifted_params_to_globals(int param_1,int param_2,int param_3)

{
  _DAT_0003c830 = param_1 << 8;
  _DAT_0003c834 = param_2 << 8;
  _DAT_0003c880 = param_3 << 8;
  return;
}
