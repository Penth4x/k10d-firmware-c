/* @k10d call_helper_with_two_params_1046357e @ 0x1046357e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper with param_1, a derived pointer, a constant, and two computed
 *   values.
 * summary:
 *   The function calls return_r4_passthrough_10463a38 and add_offset_to_param_10463b5c to
 *   obtain two values. It stores the result of add_offset_to_param_10463b5c in a local
 *   variable and passes it, along with the result of return_r4_passthrough_10463a38,
 *   param_1, param_1+1, and the constant 0x49, to issue_indexed_command_and_wait. The
 *   return value of issue_indexed_command_and_wait is returned directly. The specific roles
 *   of the callees are unknown, so the mechanical behavior is a wrapper around a five-
 *   argument call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_two_params_1046357e(int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t local_18 [4];
  
  piVar3 = (int *)local_18;
  pvVar1 = (void *)return_r4_passthrough_10463a38();
  iVar2 = add_offset_to_param_10463b5c((int)param_2);
  *piVar3 = iVar2;
  iVar2 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x49,pvVar1,*piVar3);
  return iVar2;
}
