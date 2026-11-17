/* @k10d call_helper_with_offset_arg_10484d74 @ 0x10484d74
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_field_by_index with param_1 plus 0x14 and param_2, returning its result.
 * summary:
 *   A thin wrapper that forwards two arguments to get_field_by_index, adding 0x14 to the
 *   first argument before the call. The return value of the callee is passed back
 *   unchanged. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_arg_10484d74(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_field_by_index(param_1 + 0x14,param_2);
  return uVar1;
}
