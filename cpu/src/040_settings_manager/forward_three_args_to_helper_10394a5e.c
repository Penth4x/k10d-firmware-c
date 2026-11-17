/* @k10d forward_three_args_to_helper_10394a5e @ 0x10394a5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed function to get a value, then passes it with three parameters to
 *   another helper and returns the result.
 * summary:
 *   The function acts as a thin wrapper. It first calls get_or_create_sram_object_1040a240
 *   with no arguments to obtain a value (likely a context or handle). It then passes this
 *   value along with param_2, param_3, and param_4 to retry_operation_until_state_matches.
 *   The return value of retry_operation_until_state_matches is returned directly. Without
 *   names for the callees, the specific subsystem or operation cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_three_args_to_helper_10394a5e(void *param_1,void *param_2,void *param_3,void *param_4)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_sram_object_1040a240();
  uVar1 = retry_operation_until_state_matches((void *)uVar1,param_2,param_3,param_4);
  return uVar1;
}
