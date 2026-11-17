/* @k10d write_two_byte_value_via_helper_10462e94 @ 0x10462e94
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Packs a 16-bit value from param_2 into a stack buffer and passes it to
 *   issue_indexed_command_and_wait with a fixed length of 0x12.
 * summary:
 *   The function extracts the low and high bytes of param_2 into local stack variables
 *   uStack_9 and uStack_a. It then calls issue_indexed_command_and_wait with param_1,
 *   param_1 + 1, the constant 0x12, a pointer to the stack buffer, and param_3. The return
 *   value of the callee is returned directly. The specific role of
 *   issue_indexed_command_and_wait is unknown, so the broader subsystem context cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_two_byte_value_via_helper_10462e94(int *param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_a = (uint8_t)((uint)param_2 >> 8);
  uStack_9 = (uint8_t)param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x12,&uStack_a,param_3);
  return iVar1;
}
