/* @k10d call_helper_and_store_result_104b50a4 @ 0x104b50a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from an object offset, calls a helper with it, and stores the result
 *   back into the object.
 * summary:
 *   The function dereferences the 4-byte value at param_1 + 0x5c and passes it as the first
 *   argument to parse_numeric_expression along with 0, param_2, and the incoming r7
 *   register. The return value of parse_numeric_expression is then passed to
 *   call_two_helpers_on_struct_104b4ae0 along with param_1. Finally, it returns 1. The
 *   specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_and_store_result_104b50a4(int param_1,void *param_2)

{
  uint uVar1;
  void *r7_in;
  
  uVar1 = parse_numeric_expression(*(uint32_t **)(param_1 + 0x5c),0,param_2,r7_in);
  call_two_helpers_on_struct_104b4ae0(param_1,uVar1);
  return 1;
}
