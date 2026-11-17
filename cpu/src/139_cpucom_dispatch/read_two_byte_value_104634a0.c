/* @k10d read_two_byte_value_104634a0 @ 0x104634a0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Reads a two-byte value from a device interface and stores it in the output parameter.
 * summary:
 *   The function calls issue_indexed_command_and_wait with a buffer size of 0x44 and
 *   pointers to local stack variables. If the call succeeds, it calls
 *   pack_two_byte_value_10465228 with the two bytes read from the stack and stores the
 *   resulting ushort in *param_3. The specific device or subsystem is not identifiable from
 *   the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_two_byte_value_104634a0(int *param_1,uint32_t param_2,ushort *param_3)

{
  int iVar1;
  ushort uVar2;
  uintptr_t sp;
  byte bStack_e;
  byte bStack_d;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x44,(void *)((int)&uStack_4 + 3),(int)&bStack_e);
  if (iVar1 != 0) {
    uVar2 = pack_two_byte_value_10465228(param_1,(ushort)bStack_d,(ushort)bStack_e);
    *param_3 = uVar2;
  }
  return iVar1;
}
