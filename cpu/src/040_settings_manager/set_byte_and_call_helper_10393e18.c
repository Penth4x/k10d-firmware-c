/* @k10d set_byte_and_call_helper_10393e18 @ 0x10393e18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_and_call_helper_10393e18(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x71) = param_2;
  call_helper_on_two_offsets_10399fea((void *)(param_1 + 8), (uint32_t)((uint32_t)param_2));
  return;
}
