/* @k10d set_flag_in_struct_10462df0 @ 0x10462df0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Sets a boolean flag at offset 0xd in the structure pointed to by param_1.
 * summary:
 *   The function calls issue_indexed_command_and_wait with the base pointer, a pointer to
 *   offset 0xd, the value 0xd, a pointer to a local variable containing the boolean result
 *   of (param_2 != 0), and 0. It returns the result of the callee. The role of
 *   issue_indexed_command_and_wait is unknown, but the arguments suggest a generic field
 *   setter or property update operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int set_flag_in_struct_10462df0(int *param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_9;
  
  uStack_9 = param_2 != 0;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0xd,&uStack_9,0);
  return iVar1;
}
