/* @k10d get_upper_half_of_result @ 0x104de63e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Calls a helper to compute a value and returns the upper 16 bits of that value if the
 *   helper succeeds.
 * summary:
 *   The function initializes a local variable to zero and passes it as an output parameter
 *   to query_status_and_return_code along with param_1. If query_status_and_return_code
 *   returns non-zero (success), the function masks the output value with 0xffff0000 to
 *   extract the upper 16 bits and stores it in *param_2. It returns the success status of
 *   the helper call. The specific role of query_status_and_return_code is unknown, so the
 *   camera subsystem context is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool get_upper_half_of_result(void *param_1,uint *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  iVar1 = query_status_and_return_code(param_1,&uStack_c);
  if (iVar1 != 0) {
    *param_2 = uStack_c & 0xffff0000;
  }
  return iVar1 != 0;
}
