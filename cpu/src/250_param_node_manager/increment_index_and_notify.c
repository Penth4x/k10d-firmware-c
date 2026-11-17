/* @k10d increment_index_and_notify @ 0x104df55c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Increments a counter field in a struct if a size field is non-zero, then calls a
 *   notification helper.
 * summary:
 *   The function checks if param_1[1] (likely a size or count) is non-zero. If so, it
 *   increments param_1[2] (an index or position), wrapping it to 0 if it was at the maximum
 *   value (param_1[1]-1). It then calls copy_structured_record_104df5f2 with the struct
 *   pointer. Finally, it returns true if the size field is non-zero. This pattern is
 *   typical for a circular buffer or state machine step function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool increment_index_and_notify(int *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    if (param_1[1] + -1 == param_1[2]) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1[2] + 1;
    }
    param_1[2] = iVar1;
    copy_structured_record_104df5f2(param_1,(uint16_t *)__frv_reg_unset(5),(uint16_t *)__frv_reg_unset(6));
  }
  return param_1[1] != 0;
}
