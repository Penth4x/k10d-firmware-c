/* @k10d call_helper_and_store_result_104d71d6 @ 0x104d71d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls a helper with two args and an output pointer, storing the output into the first
 *   arg on success.
 * summary:
 *   Initializes a local variable to -1 and passes its address to
 *   find_index_in_small_array_104d723a along with param_1 and param_2. If the helper
 *   returns non-zero, the value written by the helper into the local is copied into
 *   *param_1. Returns a boolean indicating whether the helper succeeded. The role of
 *   find_index_in_small_array_104d723a is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_and_store_result_104d71d6(int *param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = -1;
  iVar1 = find_index_in_small_array_104d723a(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    *param_1 = iStack_c;
  }
  return iVar1 != 0;
}
