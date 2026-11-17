/* @k10d count_entries_with_value_one @ 0x1047444e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through a list of entries and counts how many return a value of 1 from a query
 *   function.
 * summary:
 *   The function retrieves a pointer from a nested structure at param_1 + 0x18. It uses
 *   call_helper_with_zero_arg_1047e48c to get the total count of items and
 *   increment_and_call_helper to iterate through them. For each item, it calls
 *   read_table_entry_if_valid; if the result is 1, it increments a local counter. The final
 *   count is returned. The specific subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int count_entries_with_value_one(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x18) + 0x10);
  iVar1 = call_helper_with_zero_arg_1047e48c(piVar3);
  iVar4 = 0;
  for (; 0 < iVar1; iVar1 = increment_and_call_helper(piVar3,iVar1)) {
    iVar2 = read_table_entry_if_valid(piVar3,iVar1);
    if (iVar2 == 1) {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}
