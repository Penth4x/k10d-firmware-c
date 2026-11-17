/* @k10d forward_two_args_to_helper_104d7af0 @ 0x104d7af0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Forwards its two parameters to write_byte_at_offset_104de518 with the first argument
 *   offset by 4.
 * summary:
 *   A thin wrapper that calls write_byte_at_offset_104de518, passing param_2 as the first
 *   argument and param_1 + 4 as the second. No other logic, side effects, or globals are
 *   touched. The camera subsystem role is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_args_to_helper_104d7af0(int param_1,void *param_2)

{
  write_byte_at_offset_104de518(param_2,param_1 + 4);
  return;
}
