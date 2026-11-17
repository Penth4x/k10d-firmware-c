/* @k10d decrement_pointer_value_1045cdc0 @ 0x1045cdc0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Subtracts 4 from the integer value stored at the address given in param_1.
 * summary:
 *   The function dereferences param_1 and decrements the stored value by 4. It has no
 *   callees and no other side effects. The caller is swap_first_word_and_call, but without
 *   further context the specific role of this decrement is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_pointer_value_1045cdc0(int *param_1)

{
  *param_1 = *param_1 + -4;
  return;
}
