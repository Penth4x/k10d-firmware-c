/* @k10d set_two_flags_and_call_helper_twice @ 0x105143c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_two_flags_and_call_helper_twice(int param_1,int param_2)

{
  if (param_2 == 0x150001) {
    *(uint8_t *)(param_1 + 0x354) = 1;
    *(uint8_t *)(param_1 + 0x355) = 1;
    set_flag_at_offset_0x34c(param_1);
    set_flag_at_offset_0x34c(param_1);
  }
  return 1;
}
