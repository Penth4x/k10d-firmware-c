/* @k10d call_two_helpers_on_struct_10485110 @ 0x10485110
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes copy_struct_fields_to_buffer_10429056 twice on fields of the object pointed to
 *   by param_1.
 * summary:
 *   The function takes an object pointer in param_1 and calls
 *   copy_struct_fields_to_buffer_10429056 with param_1+0x14, then calls it again with the
 *   value stored at param_1+0xc and param_2. No other operations or side effects are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_struct_10485110(int param_1,uint32_t param_2)

{
  copy_struct_fields_to_buffer_10429056(param_1 + 0x14, __frv_reg_unset(5));
  copy_struct_fields_to_buffer_10429056(*(uint32_t *)(param_1 + 0xc),param_2);
  return;
}
