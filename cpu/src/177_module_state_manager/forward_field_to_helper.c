/* @k10d forward_field_to_helper @ 0x104850a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0xc of param_1 and passes it with param_2 to
 *   copy_structured_data_to_buffer.
 * summary:
 *   This is a one-line wrapper that dereferences the integer at param_1+0xc and forwards it
 *   as the first argument to copy_structured_data_to_buffer along with param_2. No other
 *   side effects or state changes are visible. The caller is dispatch_settings_command.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_field_to_helper(int param_1,int *param_2)

{
  copy_structured_data_to_buffer(*(int *)(param_1 + 0xc),param_2);
  return;
}
