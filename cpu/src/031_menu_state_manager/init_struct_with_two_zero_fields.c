/* @k10d init_struct_with_two_zero_fields @ 0x10370a2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_two_zero_fields(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x68) = 0;
  *(uint32_t *)((int)param_1 + 0x14) = 0;
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_channel_offsets((int)param_1 + 0x18);
  call_helper_on_struct_field_1036c41a(param_1,(void *)((int)param_1 + 0x18),1);
  return;
}
