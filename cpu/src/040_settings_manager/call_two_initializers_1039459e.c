/* @k10d call_two_initializers_1039459e @ 0x1039459e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions in sequence with no arguments.
 * summary:
 *   The function is a thin wrapper that calls get_or_create_sram_object_1040a240 followed
 *   by clear_flag_and_call_subroutine_1040a3d2 and returns. No local state is modified and
 *   no parameters are passed. The specific roles of the two callees are unknown, so the
 *   camera subsystem cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_initializers_1039459e(void)

{
  get_or_create_sram_object_1040a240();
  clear_flag_and_call_subroutine_1040a3d2(__frv_reg_unset(4));
  return;
}
