/* @k10d dispatch_on_pair_4_0xc @ 0x1036b072
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 017_settings_parser (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a fixed global when param_2 holds the pair (4, 0xc), else returns
 *   param_1 unchanged.
 * summary:
 *   Checks the first two ints of param_2 for the values 4 and 0xc. If both match, invokes
 *   forward_param_to_global_offset with param_1 and the global _DAT_105bb5ac. Always
 *   returns param_1. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * dispatch_on_pair_4_0xc(void *param_1,int *param_2)

{
  if ((*param_2 == 4) && (param_2[1] == 0xc)) {
    forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
  }
  return param_1;
}
