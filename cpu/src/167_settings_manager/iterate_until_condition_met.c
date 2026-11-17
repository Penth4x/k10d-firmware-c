/* @k10d iterate_until_condition_met @ 0x10474fca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops calling helper functions on an object until a check returns zero or a limit is
 *   reached.
 * summary:
 *   The function takes an object pointer (param_1) and a limit (param_2). It first calls
 *   read_field_at_offset_eight_104766f6 to check a state; if the state is not 1, it enters
 *   a loop. In each iteration, it calls call_subroutine_with_offset8 to get a value,
 *   invoke_virtual_slot_two_and_store_result to perform an operation, and
 *   check_and_fetch_value_10476550 to check a condition. The loop continues until the
 *   condition is met (returns 0) or the value equals the limit. The specific subsystem is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_until_condition_met(int param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_10;
  int iStack_c;
  
  iStack_10 = 0;
  read_field_at_offset_eight_104766f6(*(uint32_t *)(param_1 + 8),&iStack_10);
  iVar1 = param_2;
  if (iStack_10 != 1) {
    do {
      iVar1 = call_subroutine_with_offset8(*(int *)(param_1 + 8));
      invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),iVar1,*(uint32_t *)(param_1 + 0xc));
      iStack_c = 0;
      check_and_fetch_value_10476550(*(uint32_t *)(param_1 + 8),iVar1,&iStack_c);
      if (iStack_c != 0) {
        return iVar1;
      }
    } while (iVar1 != param_2);
  }
  return iVar1;
}
