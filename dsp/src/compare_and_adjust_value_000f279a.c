/* @k10d compare_and_adjust_value_000f279a @ 0x000f279a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Compares a value from dispatch_subroutine_sequence against param_2 and returns 0 or the
 *   result of dispatch_two_params_with_flags.
 * summary:
 *   Calls dispatch_subroutine_sequence with param_1 to obtain an integer. If that integer
 *   equals param_2, returns 0. Otherwise, calls dispatch_two_params_with_flags with param_1
 *   and param_2 and returns its result. The specific roles of the callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_and_adjust_value_000f279a(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = dispatch_subroutine_sequence(param_1);
  if (iVar1 == param_2) {
    uVar2 = 0;
  }
  else {
    uVar2 = dispatch_two_params_with_flags(param_1,param_2);
  }
  return uVar2;
}
