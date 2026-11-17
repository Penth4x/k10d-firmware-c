/* @k10d set_byte_and_call_helper_10393e04 @ 0x10393e04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_and_call_helper_10393e04(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x70) = param_2;
  call_helper_on_two_offsets_10399fbe((void *)(param_1 + 8), __frv_reg_unset(5));
  return;
}
