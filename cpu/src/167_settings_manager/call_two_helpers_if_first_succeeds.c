/* @k10d call_two_helpers_if_first_succeeds @ 0x104765d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a first helper with three args and, if it returns non-zero, calls a second helper
 *   with three args, returning the second's result.
 * summary:
 *   Invokes invoke_virtual_slot_two_and_store_result with param_1, *param_2, and the dword
 *   at param_1+0x10. If that call returns non-zero, it invokes iterate_and_count_successes
 *   with the dword at param_1+0xc, param_2[1], and param_3, returning that value; otherwise
 *   returns 0. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_if_first_succeeds(int param_1,uint16_t *param_2,int *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(param_1,*param_2,*(uint32_t *)(param_1 + 0x10));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = iterate_and_count_successes(*(uint32_t *)(param_1 + 0xc),param_2[1],param_3);
  }
  return uVar2;
}
