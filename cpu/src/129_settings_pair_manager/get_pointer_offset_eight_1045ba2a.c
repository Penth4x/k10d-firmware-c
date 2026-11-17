/* @k10d get_pointer_offset_eight_1045ba2a @ 0x1045ba2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Returns the value of the first element of the input pointer plus 8.
 * summary:
 *   The function dereferences the input pointer param_1 and adds the constant 8 to the
 *   result. It has no callees and performs no side effects. The specific role of this
 *   offset calculation is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_pointer_offset_eight_1045ba2a(int *param_1)

{
  return *param_1 + 8;
}
