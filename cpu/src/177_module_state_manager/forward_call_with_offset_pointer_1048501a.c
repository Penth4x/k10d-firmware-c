/* @k10d forward_call_with_offset_pointer_1048501a @ 0x1048501a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a pointer offset by 0x14 from the first argument, passing the
 *   remaining parameters unchanged.
 * summary:
 *   The function takes four parameters and immediately forwards them to
 *   copy_rgb_triplets_from_struct, adjusting the first argument by adding 0x14 to form a
 *   pointer into a structure. It acts as a thin wrapper or thunk that targets a specific
 *   field within the object pointed to by param_1. No other operations, side effects, or
 *   state changes are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_call_with_offset_pointer_1048501a(int param_1,void *param_2,int param_3,int param_4)

{
  copy_rgb_triplets_from_struct((void *)(param_1 + 0x14),param_2,param_3,param_4);
  return;
}
