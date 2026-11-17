/* @k10d forward_params_to_two_objects @ 0x10484a80
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Forwards three arguments to a callee for two object pointers stored in a struct.
 * summary:
 *   The function calls store_value_at_offset_10428394 twice with the same param_2 and
 *   param_3. The first call uses the pointer at offset 0x14 of the struct pointed to by
 *   param_1. The second call dereferences the pointer at offset 0xc of param_1 and passes
 *   that value as the first argument. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_to_two_objects(int param_1,uint32_t param_2,int param_3)

{
  store_value_at_offset_10428394(param_1 + 0x14,param_2,param_3);
  store_value_at_offset_10428394(*(int *)(param_1 + 0xc),param_2,param_3);
  return;
}
