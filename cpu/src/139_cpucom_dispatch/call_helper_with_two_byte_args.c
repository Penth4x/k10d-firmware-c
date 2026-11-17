/* @k10d call_helper_with_two_byte_args @ 0x10462d84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Packs two byte parameters into a stack buffer and passes it to a helper function.
 * summary:
 *   The function stores param_2 and param_3 into a local stack buffer. It then calls
 *   issue_indexed_command_and_wait with param_1, param_1+1, the constant 10, the stack
 *   buffer, and 0. The return value of the callee is returned directly. The specific role
 *   of the helper and the meaning of the constant 10 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_two_byte_args(int *param_1,uint8_t param_2,uint8_t param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_a = param_2;
  uStack_9 = param_3;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,10,&uStack_a,0);
  return iVar1;
}
