/* @k10d call_subroutine_with_offset_5c_104b5004 @ 0x104b5004
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the value at param_1+0x5c and returns 1.
 * summary:
 *   Reads the 32-bit value at offset 0x5c of the object pointed to by param_1 and passes it
 *   as the first argument to clamp_value_to_max_50, along with the value in r5. The
 *   function unconditionally returns 1. The role of the callee and the object field are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_5c_104b5004(int param_1)

{
  uint32_t r5_in;
  
  clamp_value_to_max_50(*(int *)(param_1 + 0x5c),(void *)r5_in);
  return 1;
}
