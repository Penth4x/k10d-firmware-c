/* @k10d decrement_counter_on_nonzero_result @ 0x10477e18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int decrement_counter_on_nonzero_result(int param_1)

{
  int iVar1;
  
  iVar1 = invoke_virtual_method_on_object_10473510(*(uint32_t *)(param_1 + 0x1c),(uint32_t *)__frv_reg_unset(5));
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  }
  return iVar1;
}
