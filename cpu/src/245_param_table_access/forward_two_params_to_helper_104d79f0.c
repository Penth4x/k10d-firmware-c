/* @k10d forward_two_params_to_helper_104d79f0 @ 0x104d79f0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Passes param_2 and param_1+4 to write_byte_at_offset_104de518 and returns.
 * summary:
 *   A thin wrapper that forwards its first argument (offset by 4) and second argument to
 *   the callee write_byte_at_offset_104de518. No local state is modified and no other side
 *   effects are visible. The caller is process_three_stage_operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_params_to_helper_104d79f0(int param_1,void *param_2)

{
  write_byte_at_offset_104de518(param_2,param_1 + 4);
  return;
}
