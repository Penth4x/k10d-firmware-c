/* @k10d call_function_with_offset_arg_10392240 @ 0x10392240
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer at 0x10397bfe with param_1 plus 0xc as the argument and
 *   returns the result.
 * summary:
 *   This is a one-line thunk that dereferences the code pointer stored at 0x10397bfe and
 *   invokes it, passing the first argument incremented by 0xc. It returns whatever the
 *   callee returns in r4. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_function_with_offset_arg_10392240(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x10397bfe/*ROM*/)(param_1 + 0xc);
  return uVar1;
}
