/* @k10d set_flag_in_struct_10462f14 @ 0x10462f14
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Sets a boolean flag at offset 0x16 in the structure pointed to by param_1.
 * summary:
 *   The function calls issue_indexed_command_and_wait with the base pointer, a pointer to
 *   offset 0x16 (param_1 + 1), the offset value 0x16, a boolean derived from param_2, and
 *   0. It returns the result of the callee. The specific role of the flag or the structure
 *   is not determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int set_flag_in_struct_10462f14(int *param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_9;
  
  uStack_9 = param_2 != 0;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x16,&uStack_9,0);
  return iVar1;
}
