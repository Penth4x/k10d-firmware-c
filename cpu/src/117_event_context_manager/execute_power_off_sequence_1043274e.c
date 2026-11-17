/* @k10d execute_power_off_sequence_1043274e @ 0x1043274e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void execute_power_off_sequence_1043274e(void *param_1)

{
  write_field_at_offset_0x5c(*(uint32_t *)((int)param_1 + 0x30),1);
  update_settings_status_flags(*(uint32_t *)((int)param_1 + 0x30),0);
  power_off_save_settings(*(uint32_t *)((int)param_1 + 0x30));
  compute_exposure_value_from_settings(*(uint32_t *)((int)param_1 + 0x30),8);
  forward_three_struct_fields(*(uint32_t *)((int)param_1 + 0x34));
  do {
    check_kernel_call_success_10459fea();
    forward_three_struct_fields(*(uint32_t *)((int)param_1 + 0x34));
  } while( true );
}
