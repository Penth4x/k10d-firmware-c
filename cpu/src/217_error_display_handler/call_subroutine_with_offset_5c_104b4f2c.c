/* @k10d call_subroutine_with_offset_5c_104b4f2c @ 0x104b4f2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the value at offset 0x5c of param_1 and param_2 to a callee, then returns 1.
 * summary:
 *   The function reads an integer from param_1 + 0x5c and passes it along with param_2 to
 *   store_byte_at_offset_0x20. It unconditionally returns 1. The specific role of the data
 *   at offset 0x5c and the callee's behavior are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_5c_104b4f2c(int param_1,void *param_2)

{
  store_byte_at_offset_0x20(*(int *)(param_1 + 0x5c),param_2);
  return 1;
}
