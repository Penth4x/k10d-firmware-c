/* @k10d set_two_byte_flag_pair @ 0x10391396
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_flag_pair(cls_10562400 *param_1)

{
  *(uint8_t *)((int)&param_1[0x46].field_0x8c + 2) = 0;
  *(uint8_t *)((int)&param_1[0x46].field_0x8c + 3) = 1;
  call_single_function_104df33e();
  return;
}
