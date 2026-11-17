/* @k10d check_condition_then_call_helper @ 0x104b5e12
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a status check fails, otherwise returns the result of a helper call.
 * summary:
 *   Calls read_offset_0x70 with param_1 to check a condition. If the result is non-zero, it
 *   immediately returns 1. If the result is zero, it calls match_verb_in_table with param_1
 *   and param_2 and returns that boolean result as an integer. The specific subsystem is
 *   unknown as the callees are not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_condition_then_call_helper(int param_1,int param_2)

{
  int iVar1;
  bool bVar3;
  uint uVar2;
  
  iVar1 = read_offset_0x70(param_1);
  if (iVar1 == 0) {
    bVar3 = match_verb_in_table(param_1,param_2);
    uVar2 = (uint)bVar3;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
