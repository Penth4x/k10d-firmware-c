/* @k10d refresh_settings_and_compute_value_104832fc @ 0x104832fc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy, calls an unknown helper with param_2, and passes
 *   the result to another helper.
 * summary:
 *   The function first calls settings_refresh_working_copy on the object at param_1+4 to
 *   update the local settings state. It then calls check_second_param_is_zero with the
 *   original parameters and passes the result, along with the settings pointer, to
 *   call_helper_with_offset_arg_10484d74. The final return value comes from
 *   call_helper_with_offset_arg_10484d74. The specific camera subsystem is not identifiable
 *   from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t refresh_settings_and_compute_value_104832fc(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  settings_refresh_working_copy(*(void **)(param_1 + 4));
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = check_second_param_is_zero(param_1,param_2);
  uVar2 = call_helper_with_offset_arg_10484d74(iVar3,iVar1);
  return uVar2;
}
