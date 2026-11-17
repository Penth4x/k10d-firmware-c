/* @k10d decrement_and_signal_counter @ 0x104df594
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Decrements a counter field in a structure and calls a handler if the counter was non-
 *   zero.
 * summary:
 *   Checks if param_1[1] is non-zero. If so, it decrements param_1[2] (falling back to
 *   param_1[1] if param_1[2] is zero) and calls copy_structured_record_104df5f2. Returns
 *   true if param_1[1] is non-zero. The specific role of the counter and the handler is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool decrement_and_signal_counter(int *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) {
      iVar1 = param_1[1];
    }
    param_1[2] = iVar1 + -1;
    copy_structured_record_104df5f2(param_1,(uint16_t *)__frv_reg_unset(5),(uint16_t *)__frv_reg_unset(6));
  }
  return param_1[1] != 0;
}
