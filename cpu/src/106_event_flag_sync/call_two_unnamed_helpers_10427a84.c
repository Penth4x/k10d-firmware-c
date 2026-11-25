/* @k10d call_two_unnamed_helpers_10427a84 @ 0x10427a84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Invokes two adjacent helper functions, passing the input argument to the second one.
 * summary:
 *   The function is a thin wrapper that calls init_object_with_id_and_flag with no
 *   arguments, then calls write_four_bytes_to_param_offset with param_1. No local state is
 *   modified and no return value is produced. The specific subsystem role cannot be
 *   determined because both callees are unnamed and their behavior is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_unnamed_helpers_10427a84(uint32_t param_1, uint32_t param_x1)

{
  init_object_with_id_and_flag((uint32_t *)param_1,param_x1);
  write_four_bytes_to_param_offset(param_1);
  return;
}
