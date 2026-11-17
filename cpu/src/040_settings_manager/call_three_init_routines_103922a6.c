/* @k10d call_three_init_routines_103922a6 @ 0x103922a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in sequence, passing the input pointer to the third.
 * summary:
 *   The function calls get_or_create_sram_object_1040a240 and
 *   set_flag_and_call_two_helpers_1040ad90 with no arguments, then calls
 *   call_six_helpers_with_param_1039236c with param_1. It acts as a thin wrapper or
 *   initialization sequence for these three routines. No specific camera subsystem behavior
 *   is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_routines_103922a6(void *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90(__frv_reg_unset(4));
  call_six_helpers_with_param_1039236c(param_1);
  return;
}
