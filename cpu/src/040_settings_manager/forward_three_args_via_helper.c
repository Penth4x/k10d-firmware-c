/* @k10d forward_three_args_via_helper @ 0x10394a84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed getter then forwards its result plus three parameters to another
 *   helper, returning the final value.
 * summary:
 *   The function takes four pointer parameters. It calls get_or_create_sram_object_1040a240
 *   with no arguments to obtain a value, then passes that value along with param_2,
 *   param_3, and param_4 to retry_apply_two_value_update. The return value of
 *   retry_apply_two_value_update is returned directly. No camera-specific behavior is
 *   evident from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_three_args_via_helper(void *param_1,void *param_2,void *param_3,void *param_4)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_sram_object_1040a240();
  uVar1 = retry_apply_two_value_update((void *)uVar1,param_2,param_3,param_4);
  return uVar1;
}
