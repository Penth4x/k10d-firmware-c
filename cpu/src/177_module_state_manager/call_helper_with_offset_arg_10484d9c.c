/* @k10d call_helper_with_offset_arg_10484d9c @ 0x10484d9c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_field_by_flag_10428436 with param_1 plus 0x14 as the first argument and
 *   returns its result.
 * summary:
 *   A one-line wrapper that forwards param_2 unchanged and passes param_1 + 0x14 to
 *   get_field_by_flag_10428436, returning the callee's return value in r4. No other side
 *   effects or globals are touched. The role of get_field_by_flag_10428436 is unknown, so
 *   the subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_arg_10484d9c(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_field_by_flag_10428436(param_1 + 0x14,param_2);
  return uVar1;
}
