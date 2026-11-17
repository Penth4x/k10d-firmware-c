/* @k10d get_next_item_from_list @ 0x104d75d6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls a helper to fetch the next item from a list and stores the result in the first
 *   parameter.
 * summary:
 *   Initializes a local variable to -1 and passes it as an output pointer to
 *   find_index_in_two_element_array_104d763a. If the callee returns non-zero, the local
 *   value is written back to *param_1. Returns true if the operation succeeded. The
 *   specific nature of the list or item is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool get_next_item_from_list(int *param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = -1;
  iVar1 = find_index_in_two_element_array_104d763a(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    *param_1 = iStack_c;
  }
  return iVar1 != 0;
}
