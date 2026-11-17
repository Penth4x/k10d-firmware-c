/* @k10d set_two_byte_flag_pair @ 0x10391396
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_flag_pair(int param_1)

{
  *(uint8_t *)(param_1 + 0x2c4e) = 0;
  *(uint8_t *)(param_1 + 0x2c4f) = 1;
  call_single_function_104df33e();
  return;
}
