/* @k10d reset_two_fields_after_base_call @ 0x105214de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_two_fields_after_base_call(int param_1)

{
  call_0x10521cba();
  *(uint32_t *)(param_1 + 0x10) = 0;
  *(uint32_t *)(param_1 + 0x14) = 0;
  return;
}
