/* @k10d lookup_and_store_index @ 0x104d77d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls a helper to find an index for a key and stores it into the first parameter if
 *   found.
 * summary:
 *   Initializes a local variable to -1 and passes its address to
 *   find_index_in_two_element_array_104d7836 along with the input parameters. If the callee
 *   returns non-zero, the local variable (now holding the found index) is written to
 *   *param_1. Returns the success status of the lookup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool lookup_and_store_index(int *param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = -1;
  iVar1 = find_index_in_two_element_array_104d7836(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    *param_1 = iStack_c;
  }
  return iVar1 != 0;
}
