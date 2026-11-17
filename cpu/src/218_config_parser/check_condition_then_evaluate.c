/* @k10d check_condition_then_evaluate @ 0x104b5e36
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Checks a primary condition, and if it fails, checks a secondary condition before
 *   evaluating a third predicate.
 * summary:
 *   The function first calls read_offset_0x70 with param_1. If that returns non-zero, it
 *   immediately returns 1. If it returns 0, it calls push_entry_to_ring_buffer with
 *   param_1. If that also returns 0, it returns 0. Otherwise, it calls match_verb_in_table
 *   with param_1 and param_2, returning the boolean result of that call. The logic
 *   implements a short-circuit evaluation of three dependent conditions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_condition_then_evaluate(int param_1,int param_2)

{
  int iVar1;
  bool bVar3;
  uint uVar2;
  
  iVar1 = read_offset_0x70(param_1);
  if (iVar1 == 0) {
    iVar1 = push_entry_to_ring_buffer(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      bVar3 = match_verb_in_table(param_1,param_2);
      uVar2 = (uint)bVar3;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
