/* @k10d call_four_initializers_1051aac0 @ 0x1051aac0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes four consecutive helper functions with the same argument and returns 1.
 * summary:
 *   The function takes a single integer parameter and passes it to four callees
 *   (check_and_set_status_flags_1051aadc, check_and_set_struct_flags,
 *   check_object_state_flags_1051ab82, check_and_set_struct_flag) in sequence. It returns
 *   the constant value 1 upon completion. The specific roles of the callees are unknown, so
 *   the overall purpose is described mechanically as a sequence of initialization or setup
 *   calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_four_initializers_1051aac0(int param_1)

{
  check_and_set_status_flags_1051aadc(param_1);
  check_and_set_struct_flags(param_1);
  check_object_state_flags_1051ab82(param_1);
  check_and_set_struct_flag(param_1);
  return 1;
}
