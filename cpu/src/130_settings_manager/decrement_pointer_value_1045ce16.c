/* @k10d decrement_pointer_value_1045ce16 @ 0x1045ce16
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Subtracts 4 from the integer value stored at the address given in param_1.
 * summary:
 *   The function dereferences param_1, subtracts 4 from the stored value, and writes the
 *   result back. It has no callees and performs no other side effects. The caller is
 *   swap_first_word_and_call_helper_1045ce20, but without further context the specific role
 *   of this decrement is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_pointer_value_1045ce16(int *param_1)

{
  *param_1 = *param_1 + -4;
  return;
}
