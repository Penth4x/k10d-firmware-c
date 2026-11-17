/* @k10d refresh_and_compute_settings @ 0x1048335c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy, computes a derived value via
 *   check_second_param_is_zero, and passes both to call_helper_with_offset_arg_10484d9c.
 * summary:
 *   The function takes an object pointer (param_1) and an argument (param_2). It first
 *   calls settings_refresh_working_copy on the pointer stored at param_1+4 to update the
 *   local settings state. It then calls check_second_param_is_zero with the original
 *   parameters to obtain an intermediate value. Finally, it calls
 *   call_helper_with_offset_arg_10484d9c with the settings pointer and the intermediate
 *   value, returning the result. The specific camera subsystem is not identifiable from the
 *   available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t refresh_and_compute_settings(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  settings_refresh_working_copy(*(void **)(param_1 + 4));
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = check_second_param_is_zero(param_1,param_2);
  uVar2 = call_helper_with_offset_arg_10484d9c(iVar3,iVar1);
  return uVar2;
}
