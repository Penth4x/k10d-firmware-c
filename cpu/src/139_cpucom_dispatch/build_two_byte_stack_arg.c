/* @k10d build_two_byte_stack_arg @ 0x10462e1a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Packs two parameters into a stack buffer and passes it to a helper function.
 * summary:
 *   The function constructs a small stack-allocated structure containing a boolean derived
 *   from param_2 and the raw value of param_3. It then calls issue_indexed_command_and_wait
 *   with param_1, a pointer to param_1+1, the constant 0xe, a pointer to this stack
 *   structure, and 0. The return value of the callee is returned directly. The specific
 *   role of issue_indexed_command_and_wait is unknown, so the subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int build_two_byte_stack_arg(int *param_1,int param_2,uint8_t param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_a = param_2 != 0;
  uStack_9 = param_3;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0xe,&uStack_a,0);
  return iVar1;
}
