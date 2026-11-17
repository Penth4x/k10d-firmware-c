/* @k10d call_helper_with_two_byte_param_10463038 @ 0x10463038
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into a local 2-byte buffer and passes it to
 *   issue_indexed_command_and_wait with fixed arguments.
 * summary:
 *   The function places the low and high bytes of param_2 into a stack buffer
 *   (uStack_a/uStack_9). It then calls issue_indexed_command_and_wait with param_1,
 *   param_1+1, the constant 0x21, a pointer to the stack buffer, and 0. The role of
 *   issue_indexed_command_and_wait is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_byte_param_10463038(int *param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_9 = (uint8_t)param_2;
  uStack_a = (uint8_t)((uint)param_2 >> 8);
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x21,&uStack_a,0);
  return;
}
