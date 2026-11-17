/* @k10d query_two_byte_value @ 0x104634e4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Queries a two-byte value from a device interface using a 0x45 command and stores it in
 *   the output parameter.
 * summary:
 *   The function calls issue_indexed_command_and_wait with a command code of 0x45 and a
 *   boolean flag derived from param_2. If the query succeeds, it calls
 *   pack_two_byte_value_10465228 to process two bytes (bStack_d and bStack_e) and stores
 *   the resulting ushort in *param_3. The specific device or subsystem is not identifiable
 *   from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int query_two_byte_value(int *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  ushort uVar2;
  uintptr_t sp;
  byte bStack_e;
  byte bStack_d;
  uint8_t uStack_9;
  
  uStack_9 = param_2 != 0;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x45,&uStack_9,(int)&bStack_e);
  if (iVar1 != 0) {
    uVar2 = pack_two_byte_value_10465228(param_1,(ushort)bStack_d,(ushort)bStack_e);
    *param_3 = uVar2;
  }
  return iVar1;
}
