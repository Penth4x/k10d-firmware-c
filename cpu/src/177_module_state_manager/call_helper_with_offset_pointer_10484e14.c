/* @k10d call_helper_with_offset_pointer_10484e14 @ 0x10484e14
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with a pointer offset by 0x14 from the first argument and the
 *   second argument.
 * summary:
 *   The function takes two integer parameters. It adds 0x14 to param_1 to form a new
 *   pointer and passes it along with param_2 to the callee
 *   compute_struct_field_offset_1042853e. It then returns void. The specific role of the
 *   callee is unknown, so the behavior is described mechanically as a wrapper that adjusts
 *   the first argument before delegating.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_pointer_10484e14(int param_1,int param_2)

{
  compute_struct_field_offset_1042853e((void *)(param_1 + 0x14),param_2);
  return;
}
