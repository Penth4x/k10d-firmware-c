/* @k10d call_three_init_helpers_10392286 @ 0x10392286
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions and then calls a third helper passing the input
 *   pointer.
 * summary:
 *   The function takes a single void pointer argument and calls
 *   get_or_create_sram_object_1040a240 and set_flag_and_call_two_helpers_1040ad90 with no
 *   arguments, followed by call_six_helpers_with_param_1039232e with the original
 *   parameter. It acts as a thin wrapper or initialization sequence for the three callees.
 *   No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_helpers_10392286(void *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90(__frv_reg_unset(4));
  call_six_helpers_with_param_1039232e(param_1);
  return;
}
