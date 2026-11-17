/* @k10d check_param_and_call_subroutine @ 0x10392fb6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls dispatch_mode_state_update_103932fc if the third parameter is not equal to 0xc.
 * summary:
 *   The function performs a single comparison of param_3 against the constant 0xc. If the
 *   value does not match, it invokes the callee at 0x103932fc. No other side effects or
 *   memory accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_param_and_call_subroutine(uint32_t param_1,uint32_t param_2,int param_3)

{
  if (param_3 != 0xc) {
    dispatch_mode_state_update_103932fc(__frv_reg_unset(4));
  }
  return;
}
