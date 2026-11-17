/* @k10d forward_three_args_to_helper_10476840 @ 0x10476840
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes three arguments to a helper, forwarding the value at offset 8 of the first
 *   parameter.
 * summary:
 *   This function is a thin wrapper that reads an integer from offset 8 of the first
 *   parameter (param_1) and calls allocate_and_bind_object_104751dc with that value,
 *   param_2, and param_3. It performs no other operations and returns void. The specific
 *   role of the helper and the data structure is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_three_args_to_helper_10476840(int param_1,void *param_2,int param_3)

{
  allocate_and_bind_object_104751dc(*(int *)(param_1 + 8),param_2,param_3);
  return;
}
