/* @k10d call_two_helpers_on_object_104bd86c @ 0x104bd86c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on param_1, passing a field at offset 0x8d0 to the first
 *   and param_2 to the second, returning the second's result.
 * summary:
 *   The function reads the 4-byte value at param_1 + 0x8d0 and passes it along with param_1
 *   to store_value_at_two_offsets. It then calls invoke_virtual_method_on_object_104bfc92
 *   with param_1 and param_2, returning that function's return value. No other side effects
 *   or global accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_on_object_104bd86c(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  uVar1 = invoke_virtual_method_on_object_104bfc92(param_1,param_2);
  return uVar1;
}
