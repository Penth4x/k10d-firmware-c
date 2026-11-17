/* @k10d count_entries_with_value_two @ 0x10474c84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int count_entries_with_value_two(int param_1)

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
    if (iVar2 == 2) {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}
