/* @k10d call_sub_and_store_result @ 0x104b5018
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x5c of param_1, calls clamp_value_to_max_5000 with it and
 *   in_r5, then passes the result to forward_call_with_offset_0x48.
 * summary:
 *   The function dereferences param_1 + 0x5c to get an integer argument for
 *   clamp_value_to_max_5000, passing in_r5 as the second argument. The return value of
 *   clamp_value_to_max_5000 is then passed as the second argument to
 *   forward_call_with_offset_0x48 along with param_1. The function always returns 1. The
 *   specific roles of the callees are unknown, so the operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_sub_and_store_result(int param_1)

{
  uint32_t uVar1;
  uint32_t r5_in;
  
  uVar1 = clamp_value_to_max_5000(*(int *)(param_1 + 0x5c),(void *)r5_in);
  forward_call_with_offset_0x48(param_1,uVar1);
  return 1;
}
