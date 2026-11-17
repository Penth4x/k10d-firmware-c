/* @k10d call_two_helpers_and_return_104bd840 @ 0x104bd840
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper with a field from param_1, then calls a second helper with all three
 *   arguments and returns its result.
 * summary:
 *   The function first calls store_value_at_two_offsets passing param_1 and the value
 *   stored at offset 0x8d0 within the object pointed to by param_1. It then calls
 *   invoke_object_method_with_lock with the original three arguments (param_1, param_2,
 *   param_3) and returns the value from that second call. The specific roles of the callees
 *   and the object field are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_104bd840(int param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  uVar1 = invoke_object_method_with_lock(param_1,param_2,param_3);
  return uVar1;
}
