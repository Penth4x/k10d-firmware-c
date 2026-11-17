/* @k10d call_subroutine_with_offset_5c_104b4f66 @ 0x104b4f66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x5c to apply_compound_assignment and returns 1.
 * summary:
 *   The function dereferences param_1 at offset 0x5c and passes that pointer as the first
 *   argument to apply_compound_assignment. It also passes the value in register r5 as the
 *   second argument. It unconditionally returns 1. The specific role of the data at offset
 *   0x5c and the behavior of apply_compound_assignment are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_5c_104b4f66(int param_1)

{
  char *r5_in;
  
  apply_compound_assignment(*(uint32_t **)(param_1 + 0x5c),r5_in);
  return 1;
}
