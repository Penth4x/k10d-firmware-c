/* @k10d call_helper_with_param2_and_offset_0x30 @ 0x1051cf00
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls write_to_dynamic_array with param_2, zero, and the value at param_1+0x30.
 * summary:
 *   The function is a thin wrapper that forwards param_2 as the first argument, 0 as the
 *   second, and the 4-byte value stored at offset 0x30 of the param_1 structure as the
 *   third argument to write_to_dynamic_array. No other operations or side effects are
 *   visible in the pseudocode. The role of write_to_dynamic_array is unknown, so the camera
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_param2_and_offset_0x30(int param_1,void *param_2)

{
  write_to_dynamic_array((int)param_2,0,**(uint32_t **)(param_1 + 0x30));
  return;
}
