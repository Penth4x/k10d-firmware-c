/* @k10d set_flag_and_call_two_helpers_1037030c @ 0x1037030c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_two_helpers_1037030c(int param_1)

{
  *(uint8_t *)(param_1 + 0xc4) = 1;
  invoke_callback_at_8000439c();
  write_zero_to_object_offset_bc(param_1);
  return;
}
