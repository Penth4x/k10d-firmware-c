/* @k10d advance_pointer_to_next_1045b9d8 @ 0x1045b9d8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Advances a pointer to the next element by dereferencing the offset stored at +4.
 * summary:
 *   The function takes a pointer to a pointer (param_1) and updates it to point to the
 *   value stored at offset 4 of the current target. This is a standard linked-list or queue
 *   node advancement operation. No other side effects or MMIO writes are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void advance_pointer_to_next_1045b9d8(int *param_1)

{
  *param_1 = *(int *)(*param_1 + 4);
  return;
}
