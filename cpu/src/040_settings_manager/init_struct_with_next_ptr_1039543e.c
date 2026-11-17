/* @k10d init_struct_with_next_ptr_1039543e @ 0x1039543e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets the second field of a struct to point to its third field and calls an unknown
 *   helper.
 * summary:
 *   The function writes the address param_1+8 into the memory location param_1+4,
 *   establishing a self-referential pointer within the structure. It then calls
 *   initialize_object_with_three_calls_103954ba, which has no known name or purpose.
 *   Finally, it returns the original pointer param_1. The specific role of the structure
 *   and the helper function cannot be determined from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_struct_with_next_ptr_1039543e(int param_1)

{
  *(int *)(param_1 + 4) = param_1 + 8;
  initialize_object_with_three_calls_103954ba((void *)__frv_reg_unset(4));
  return param_1;
}
