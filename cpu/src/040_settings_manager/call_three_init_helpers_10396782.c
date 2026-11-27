/* @k10d call_three_init_helpers_10396782 @ 0x10396782
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions and then calls a third helper with the input
 *   pointer.
 * summary:
 *   The function takes a single void pointer argument. It calls
 *   get_or_create_sram_object_1040a240 and set_flag_and_call_two_helpers_1040ad90 with no
 *   arguments, then calls initialize_object_and_call_handler passing the original param_1.
 *   No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_helpers_10396782(void *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90((uint32_t)param_1);
  initialize_object_and_call_handler(param_1);
  return;
}
