/* @k10d check_flag_then_delegate @ 0x104a9188
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns 0 if a status check fails, otherwise delegates to a helper and returns its
 *   boolean result.
 * summary:
 *   Calls query_and_log_object_state as a guard; if it returns 0, the function returns 0.
 *   Otherwise it calls virtual_call_with_offset_adjust with the three original parameters
 *   and returns that result as a uint. The function acts as a simple conditional wrapper
 *   around virtual_call_with_offset_adjust.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_flag_then_delegate(void *param_1,int *param_2,void *param_3)

{
  int iVar1;
  bool bVar3;
  uint uVar2;
  
  iVar1 = query_and_log_object_state(__frv_reg_unset(4),(int *)__frv_reg_unset(5));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    bVar3 = virtual_call_with_offset_adjust(param_1,param_2,param_3);
    uVar2 = (uint)bVar3;
  }
  return uVar2;
}
