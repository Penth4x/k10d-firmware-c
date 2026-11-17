/* @k10d call_helper_with_two_byte_param_1046305a @ 0x1046305a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Packs a 16-bit value from param_2 onto the stack and passes it to
 *   issue_indexed_command_and_wait with a fixed 0x22 argument.
 * summary:
 *   The function stores the low and high bytes of param_2 into local stack variables
 *   uStack_9 and uStack_a. It then calls issue_indexed_command_and_wait with param_1,
 *   param_1+1, the constant 0x22, a pointer to the stack variables, and 0. The callee
 *   issue_indexed_command_and_wait is not named, so the specific subsystem role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_byte_param_1046305a(int *param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_9 = (uint8_t)param_2;
  uStack_a = (uint8_t)((uint)param_2 >> 8);
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x22,&uStack_a,0);
  return;
}
