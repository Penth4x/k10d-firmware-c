/* @k10d adjust_dat_0003c48b_by_param @ 0x000c826c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Adds a scaled offset to DAT_0003c48b and passes the result to
 *   clamp_value_to_range_000d9ac0.
 * summary:
 *   The function computes a new value by adding param_1 * -4 to the current contents of
 *   DAT_0003c48b, truncating to a short. It then calls clamp_value_to_range_000d9ac0 with
 *   this computed value, 0x28, and 0x58, and stores the return value back into
 *   DAT_0003c48b. The specific role of DAT_0003c48b and clamp_value_to_range_000d9ac0 is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_dat_0003c48b_by_param(short param_1)

{
  DAT_0003c48b = clamp_value_to_range_000d9ac0((int)(short)((ushort)DAT_0003c48b + param_1 * -4),0x28,0x58);
  return;
}
