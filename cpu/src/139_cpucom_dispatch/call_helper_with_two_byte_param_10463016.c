/* @k10d call_helper_with_two_byte_param_10463016 @ 0x10463016
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Passes a 16-bit value from param_2 to issue_indexed_command_and_wait along with param_1
 *   and fixed constants.
 * summary:
 *   The function stores the low and high bytes of param_2 into a local stack buffer. It
 *   then calls issue_indexed_command_and_wait with param_1, param_1+1, the constant 0x20, a
 *   pointer to the stack buffer, and 0. The return value of the callee is returned
 *   directly. The specific role of issue_indexed_command_and_wait is unknown, so the
 *   behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_two_byte_param_10463016(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_9 = (uint8_t)param_2;
  uStack_a = (uint8_t)((uint)param_2 >> 8);
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x20,&uStack_a,0);
  return iVar1;
}
