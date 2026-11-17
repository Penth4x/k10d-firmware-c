/* @k10d call_helper_if_param_nonzero_104e708e @ 0x104e708e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Returns zero if param_3 is zero, otherwise calls read_array_element_by_index then
 *   accumulate_value_if_valid and returns the latter's result.
 * summary:
 *   The function guards on param_3 being non-zero. When true, it invokes
 *   read_array_element_by_index with (param_3, 0) and discards the return value, then calls
 *   accumulate_value_if_valid with (param_1, param_2, result_of_first_call) and returns
 *   that value. When param_3 is zero it returns 0 without calling either callee. No camera
 *   subsystem is identifiable from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_if_param_nonzero_104e708e(int *param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_3 != 0) {
    iVar2 = read_array_element_by_index(param_3,0);
    uVar1 = accumulate_value_if_valid(param_1,param_2,iVar2);
  }
  return uVar1;
}
