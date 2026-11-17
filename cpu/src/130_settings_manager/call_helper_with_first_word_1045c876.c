/* @k10d call_helper_with_first_word_1045c876 @ 0x1045c876
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer and its first 16-bit value to a helper function.
 * summary:
 *   The function takes a ushort pointer, dereferences the first element, and passes both
 *   the pointer and that value as arguments to check_size_alignment. It performs no other
 *   operations or side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_first_word_1045c876(ushort *param_1)

{
  check_size_alignment(param_1,(uint)*param_1);
  return;
}
