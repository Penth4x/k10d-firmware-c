/* @k10d call_virtual_method_on_object_1052ba5c @ 0x1052ba5c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 286_sr_calibration (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_method_on_object_1052ba5c(uint32_t *param_1)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id(param_1 + 1);
  uVar1 = (*(code *)0x1048f94e/*ROM*/)(*param_1);
  check_kernel_call_success_10459d88(param_1 + 1);
  return uVar1;
}
