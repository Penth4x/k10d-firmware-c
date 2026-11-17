/* @k10d compute_two_byte_result @ 0x1046337c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a 0x3d-length buffer, then combines two stack bytes into a ushort
 *   result.
 * summary:
 *   Invokes issue_indexed_command_and_wait with param_1, param_1+1, length 0x3d, a null
 *   pointer, and a 2-byte stack buffer. If that call returns non-zero, it calls
 *   pack_two_byte_value_10465228 with param_1 and the two stack bytes, storing the
 *   resulting ushort into *param_2. Returns the status from the first helper. The specific
 *   subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_two_byte_result(int *param_1,ushort *param_2)

{
  int iVar1;
  ushort uVar2;
  uintptr_t sp;
  byte bStack_a;
  byte bStack_9;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x3d,(void *)0x0,(int)&bStack_a);
  if (iVar1 != 0) {
    uVar2 = pack_two_byte_value_10465228(param_1,(ushort)bStack_9,(ushort)bStack_a);
    *param_2 = uVar2;
  }
  return iVar1;
}
