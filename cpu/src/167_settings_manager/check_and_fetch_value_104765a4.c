/* @k10d check_and_fetch_value_104765a4 @ 0x104765a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a validation function with three arguments and, if successful, retrieves a value
 *   from a second function using a field from the input structure.
 * summary:
 *   The function first calls invoke_virtual_slot_two_and_store_result with param_1,
 *   param_2, and the value at offset 0x10 of param_1. If this call returns non-zero, it
 *   calls count_matching_entries_in_range with the value at offset 0xc of param_1 and
 *   stores the result in the location pointed to by param_3. It returns true if the initial
 *   check passed, false otherwise. The specific roles of the callees and the structure
 *   fields are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_fetch_value_104765a4(int param_1,uint32_t param_2,uint32_t *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(param_1,param_2,*(uint32_t *)(param_1 + 0x10));
  if (iVar1 != 0) {
    uVar2 = count_matching_entries_in_range(*(uint32_t *)(param_1 + 0xc));
    *param_3 = uVar2;
  }
  return iVar1 != 0;
}
