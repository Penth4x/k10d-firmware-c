/* @k10d wait_for_flag_then_call_two_methods @ 0x10489c0a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_then_call_two_methods(cls_105b3928 *param_1)

{
  char cVar1;
  
  cVar1 = param_1->field_0x68;
  while (cVar1 == '\0') {
    check_kernel_call_success_10459fea();
    cVar1 = param_1->field_0x68;
  }
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
