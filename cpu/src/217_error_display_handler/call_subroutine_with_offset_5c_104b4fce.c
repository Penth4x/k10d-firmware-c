/* @k10d call_subroutine_with_offset_5c_104b4fce @ 0x104b4fce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x5c to check_and_store_result.
 * summary:
 *   This function reads a 32-bit value from offset 0x5c of the object pointed to by param_1
 *   and passes it as the first argument to check_and_store_result. It also passes the value
 *   in register r5 as the second argument. The role of the object and the callee is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_5c_104b4fce(int param_1)

{
  byte *r5_in;
  
  check_and_store_result(*(uint32_t **)(param_1 + 0x5c),r5_in);
  return;
}
