/* @k10d initialize_object_and_dispatch @ 0x1039680a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_and_dispatch(void *param_1)

{
  get_or_create_sram_object_1040a240();
  poll_subobject_state_change((void *)(uint32_t)param_1);
  call_three_helpers_in_sequence_103968d6(param_1,0);
  request_ui_sync_code_4(*(void **)((int)param_1 + 8));
  get_or_create_sram_object_1040a240();
  init_object_flag_and_subobj((uint32_t)param_1);
  return;
}
