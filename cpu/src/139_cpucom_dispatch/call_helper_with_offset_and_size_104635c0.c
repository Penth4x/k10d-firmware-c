/* @k10d call_helper_with_offset_and_size_104635c0 @ 0x104635c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the first argument, a pointer offset by one, a size of 0x4b, and
 *   two additional parameters.
 * summary:
 *   This function acts as a thin wrapper around issue_indexed_command_and_wait. It passes
 *   param_1 as the first argument, param_1 + 1 as the second argument, the constant 0x4b as
 *   the third, and forwards param_2 and param_3. It returns the result of the callee
 *   directly. The specific role of the callee is unknown, so the behavior is described
 *   mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_and_size_104635c0(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x4b,param_2,param_3);
  return iVar1;
}
