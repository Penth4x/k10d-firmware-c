/* @k10d refresh_and_apply_settings @ 0x104833ae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy and passes the result through two subsequent
 *   processing steps.
 * summary:
 *   The function takes an object pointer and a second parameter. It first calls
 *   settings_refresh_working_copy on the pointer stored at offset 4 of the object. It then
 *   calls check_second_param_is_zero with the original object and parameter, and finally
 *   passes the result along with the pointer from offset 4 to call_virtual_slot_2_10484db0,
 *   returning the final value. The specific roles of check_second_param_is_zero and
 *   call_virtual_slot_2_10484db0 are unknown, so the exact camera subsystem context is not
 *   determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t refresh_and_apply_settings(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  settings_refresh_working_copy(*(void **)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  check_second_param_is_zero(param_1,param_2);
  uVar1 = call_virtual_slot_2_10484db0(iVar2);
  return uVar1;
}
