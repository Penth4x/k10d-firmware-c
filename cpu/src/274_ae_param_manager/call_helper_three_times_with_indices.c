/* @k10d call_helper_three_times_with_indices @ 0x1051a34e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls write_byte_to_struct_offset_104a8be2 three times with param_2 and index pairs
 *   (0,0), (1,1), (2,2).
 * summary:
 *   The function ignores param_1 and invokes the callee
 *   write_byte_to_struct_offset_104a8be2 three times. Each call passes param_2 as the first
 *   argument and a matching index pair (0,0), (1,1), and (2,2) as the second and third
 *   arguments. The role of write_byte_to_struct_offset_104a8be2 is unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_three_times_with_indices(uint32_t param_1,int param_2)

{
  write_byte_to_struct_offset_104a8be2(param_2,0,0);
  write_byte_to_struct_offset_104a8be2(param_2,1,1);
  write_byte_to_struct_offset_104a8be2(param_2,2,2);
  return;
}
