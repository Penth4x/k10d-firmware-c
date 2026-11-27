/* @k10d call_three_init_helpers_10392ba4 @ 0x10392ba4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in sequence, passing the input pointer to the third.
 * summary:
 *   The function takes a single void pointer argument and calls
 *   get_or_create_sram_object_1040a240 and set_flag_and_call_two_helpers_1040ad90 with no
 *   arguments, then calls process_event_and_cleanup with the original parameter. It returns
 *   void. The specific roles of the callees are unknown, so the function acts as a simple
 *   wrapper or initialization sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_helpers_10392ba4(void *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90((uint32_t)param_1);
  process_event_and_cleanup(param_1);
  return;
}
