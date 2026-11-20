/* @k10d reset_object_state_and_call_helpers @ 0x10488438
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_state_and_call_helpers(cls_105b3370 *param_1)

{
  clear_flag_at_offset_0x4c_104888d2(param_1);
  clear_byte_at_offset_0x4d_104888fe(param_1);
  param_1->field_0x53 = 0;
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
