/* @k10d decrement_counter_on_success @ 0x10477e40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a pointer from offset 0x20 and decrements a counter at offset 0x6c
 *   if the helper returns non-zero.
 * summary:
 *   The function reads a pointer from param_1 + 0x20 and passes it to
 *   invoke_virtual_method_slot_5. If the return value is non-zero, it decrements the
 *   integer stored at param_1 + 0x6c. The return value of the helper is propagated back to
 *   the caller. The specific role of the counter and the helper is not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int decrement_counter_on_success(int param_1)

{
  int iVar1;
  
  iVar1 = invoke_virtual_method_slot_5(*(uint32_t *)(param_1 + 0x20),(uint32_t *)__frv_reg_unset(5));
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  }
  return iVar1;
}
