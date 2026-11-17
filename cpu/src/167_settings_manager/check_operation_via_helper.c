/* @k10d check_operation_via_helper @ 0x10475d12
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a function pointer from an object field and returns whether a helper call
 *   succeeds.
 * summary:
 *   Reads a code pointer from offset 4 of the object in param_1 and calls it to obtain a
 *   context pointer. Passes that context and param_2 to compare_null_terminated_strings,
 *   then returns true if the helper returns 0. The specific subsystem is not identifiable
 *   from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_operation_via_helper(int param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)(*(code *)0x10459360/*ROM*/)(*(uint32_t *)(param_1 + 4));
  iVar2 = compare_null_terminated_strings(pvVar1,param_2);
  return iVar2 == 0;
}
