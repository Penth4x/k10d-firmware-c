/* @k10d call_subroutine_with_offset_5c_104b4f40 @ 0x104b4f40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x5c to store_result_at_offset_0x24 and returns 1.
 * summary:
 *   The function reads an integer from offset 0x5c of the object pointed to by param_1 and
 *   passes it as the first argument to store_result_at_offset_0x24, along with the value in
 *   r5. It unconditionally returns 1. The specific role of store_result_at_offset_0x24 is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_5c_104b4f40(int param_1)

{
  uint32_t r5_in;
  
  store_result_at_offset_0x24(*(int *)(param_1 + 0x5c),(void *)r5_in);
  return 1;
}
