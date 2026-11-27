/* @k10d call_six_helpers_with_param_1039236c @ 0x1039236c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes six helper functions in sequence, passing param_1 and a dereferenced field to
 *   two of them.
 * summary:
 *   The function calls get_or_create_sram_object_1040a240 twice,
 *   poll_until_two_shorts_change, call_three_unnamed_helpers_103923fa (with param_1 and 0),
 *   request_ui_sync_code_4 (with the value at param_1+8), and init_object_flag_and_subobj.
 *   No local state is modified beyond the calls. The role of the helpers is unknown, so the
 *   behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_six_helpers_with_param_1039236c(void *param_1)

{
  get_or_create_sram_object_1040a240();
  poll_until_two_shorts_change((void *)(uint32_t)param_1);
  call_three_unnamed_helpers_103923fa(param_1,0);
  request_ui_sync_code_4(*(void **)((int)param_1 + 8));
  get_or_create_sram_object_1040a240();
  init_object_flag_and_subobj((uint32_t)param_1);
  return;
}
