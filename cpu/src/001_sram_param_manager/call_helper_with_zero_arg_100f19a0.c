/* @k10d call_helper_with_zero_arg_100f19a0 @ 0x100f19a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_value_from_struct_by_index with argument 0 and returns its result.
 * summary:
 *   A one-line wrapper that invokes get_value_from_struct_by_index passing 0 and returns
 *   the callee's return value in r4. No other operations, globals, or side effects are
 *   visible. The role of get_value_from_struct_by_index is unknown, so the wrapper's
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_zero_arg_100f19a0(void)

{
  uint32_t uVar1;
  
  uVar1 = get_value_from_struct_by_index(0);
  return uVar1;
}
