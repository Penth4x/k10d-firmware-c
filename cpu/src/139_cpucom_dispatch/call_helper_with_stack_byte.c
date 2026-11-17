/* @k10d call_helper_with_stack_byte @ 0x10463530
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Wraps a single byte on the stack and forwards it with a fixed constant to a helper
 *   function.
 * summary:
 *   The function stores param_2 into a local stack variable and calls
 *   issue_indexed_command_and_wait with param_1, param_1+1, the constant 0x46, a pointer to
 *   the stack byte, and param_3. It returns the helper's result directly. No camera-
 *   specific behavior is evident from the pseudocode or the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_stack_byte(int *param_1,uint8_t param_2,int param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_9;
  
  uStack_9 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x46,&uStack_9,param_3);
  return iVar1;
}
