/* @k10d call_helper_with_offset_and_zero_104631ca @ 0x104631ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the input pointer, a pointer offset by one, and a small constant.
 * summary:
 *   The function takes a single pointer argument and immediately calls
 *   issue_indexed_command_and_wait. It passes the original pointer as the first argument,
 *   the pointer incremented by one (param_1 + 1) as the second argument, the constant 0x2e
 *   as the third, a null pointer as the fourth, and zero as the fifth. It returns the
 *   result of this call directly. The specific role of the helper and the meaning of the
 *   constant 0x2e are not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_and_zero_104631ca(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x2e,(void *)0x0,0);
  return iVar1;
}
