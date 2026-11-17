/* @k10d forward_three_params_to_helper_10484e6c @ 0x10484e6c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Passes three parameters to a helper, offsetting the first by 0x14.
 * summary:
 *   The function takes three integer parameters and immediately forwards them to
 *   compute_struct_field_offset_104288de. The first parameter is adjusted by adding 0x14
 *   before being passed, while the second and third parameters are passed unchanged. No
 *   other operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_three_params_to_helper_10484e6c(int param_1,int param_2,int param_3)

{
  compute_struct_field_offset_104288de((void *)(param_1 + 0x14),param_2,param_3);
  return;
}
