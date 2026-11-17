/* @k10d send_three_byte_command @ 0x10462d18
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Packs three parameters into a local buffer and passes them to a lower-level
 *   transmission routine.
 * summary:
 *   The function constructs a 3-byte payload on the stack from param_2 and the lower 16
 *   bits of param_3. It then calls issue_indexed_command_and_wait with param_1, a pointer
 *   to param_1+1, the constant 7, the stack buffer, and 0. The return value of the callee
 *   is returned directly. Without knowledge of issue_indexed_command_and_wait, the specific
 *   subsystem (e.g., SPI, UART, or companion chip) cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_three_byte_command(int *param_1,uint8_t param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_a = (uint8_t)((uint)param_3 >> 8);
  uStack_9 = (uint8_t)param_3;
  uStack_b = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,7,&uStack_b,0);
  return iVar1;
}
