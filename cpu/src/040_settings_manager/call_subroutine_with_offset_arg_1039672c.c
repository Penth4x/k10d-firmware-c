/* @k10d call_subroutine_with_offset_arg_1039672c @ 0x1039672c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an indirect function pointer at 0x1039be3a with param_1+0xc and returns its
 *   result.
 * summary:
 *   The function performs a single indirect call through the code pointer stored at
 *   0x1039be3a, passing the value of param_1 plus 0xc as the argument. It returns the value
 *   returned by that callee. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_arg_1039672c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1039be3a/*ROM*/)(param_1 + 0xc);
  return uVar1;
}
