/* @k10d wait_for_flag_then_call_virtual @ 0x103912b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_then_call_virtual(void *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x2c38);
  while (cVar1 != '\0') {
    check_kernel_call_success_10459fea();
    cVar1 = *(char *)((int)param_1 + 0x2c38);
  }
  invoke_virtual_slot_10_on_sixteen_objects();
  override_parent_slot4(param_1);
  return;
}
