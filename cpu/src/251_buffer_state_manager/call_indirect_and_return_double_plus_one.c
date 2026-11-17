/* @k10d call_indirect_and_return_double_plus_one @ 0x104e13ba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls an indirect function pointer with a computed offset and returns (param_4+1)*2.
 * summary:
 *   The function dereferences a code pointer at 0x104e1622 and calls it with param_2, a
 *   value computed from param_1's fields (offset 0xc plus an index from offset 0x14 scaled
 *   by 4, plus param_3), and param_4. It then returns (param_4 + 1) * 2. No callees are
 *   identified in the database, so the specific subsystem role cannot be determined from
 *   the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_indirect_and_return_double_plus_one(int param_1,void *param_2,int param_3,int param_4)

{
  (*(code *)0x104e1622/*ROM*/)
            (param_2,*(int *)(param_1 + 0xc + *(int *)(param_1 + 0x14) * 4) + param_3,param_4);
  return (param_4 + 1) * 2;
}
