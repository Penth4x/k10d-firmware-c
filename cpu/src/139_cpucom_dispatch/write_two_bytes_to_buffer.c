/* @k10d write_two_bytes_to_buffer @ 0x1046322a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value from param_2 into a buffer at offset 0x32 via a helper function.
 * summary:
 *   The function splits the 32-bit param_2 into two bytes (low and high) and stores them on
 *   the stack. It then calls issue_indexed_command_and_wait with param_1, param_1+1, the
 *   offset 0x32 (decimal 50), the stack address containing the bytes, and 0. The return
 *   value of the callee is returned directly. The specific role of
 *   issue_indexed_command_and_wait is unknown, but the pattern suggests a generic memory or
 *   buffer write operation at a fixed offset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_two_bytes_to_buffer(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_9 = (uint8_t)param_2;
  uStack_a = (uint8_t)((uint)param_2 >> 8);
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x32,&uStack_a,0);
  return iVar1;
}
