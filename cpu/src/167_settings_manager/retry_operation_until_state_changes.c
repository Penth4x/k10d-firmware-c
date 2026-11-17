/* @k10d retry_operation_until_state_changes @ 0x10474978
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Repeats a sub-operation while it returns 1 and the state at param_1+8 remains
 *   unchanged.
 * summary:
 *   Reads an initial state value from *(param_1 + 8) via
 *   call_function_at_offset_8_104767d4. In a loop, calls iterate_list_until_error(param_1,
 *   state, param_2) and re-reads the state via call_helper_on_field_at_offset_8_1047681c.
 *   Exits and returns the sub-operation result when the state differs from the initial
 *   value or when the sub-operation returns a value other than 1. The specific subsystem is
 *   not identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104749b6) overlaps instruction at (ram,0x104749b4)
    */

int retry_operation_until_state_changes(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = call_function_at_offset_8_104767d4(*(int *)(param_1 + 8));
  iVar3 = iVar1;
  do {
    iVar2 = iterate_list_until_error(param_1,iVar3,param_2);
    iVar3 = call_helper_on_field_at_offset_8_1047681c(*(int *)(param_1 + 8));
    if (iVar3 == iVar1) {
      return iVar2;
    }
  } while (iVar2 == 1);
  return iVar2;
}
