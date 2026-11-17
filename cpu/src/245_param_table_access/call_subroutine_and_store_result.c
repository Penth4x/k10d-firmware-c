/* @k10d call_subroutine_and_store_result @ 0x104d72e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls find_index_in_four_int_array with param_1, param_2, and a local initialized to
 *   -1, storing the local's value into *param_1 if the call returns non-zero.
 * summary:
 *   The function sets a local variable to -1 and passes its address as the third argument
 *   to find_index_in_four_int_array. If find_index_in_four_int_array returns a non-zero
 *   value, the function writes the local variable's current value into the memory pointed
 *   to by param_1. It returns true if the callee returned non-zero, false otherwise. The
 *   specific role of find_index_in_four_int_array is unknown, so the higher-level purpose
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_subroutine_and_store_result(int *param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = -1;
  iVar1 = find_index_in_four_int_array(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    *param_1 = iStack_c;
  }
  return iVar1 != 0;
}
