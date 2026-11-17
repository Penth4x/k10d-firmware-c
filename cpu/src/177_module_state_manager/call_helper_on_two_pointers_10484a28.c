/* @k10d call_helper_on_two_pointers_10484a28 @ 0x10484a28
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on two pointers derived from a struct: one at offset 0x14 and one
 *   stored at offset 0xc.
 * summary:
 *   Takes a base pointer (param_1) and two additional arguments, then calls
 *   store_value_at_offset_1042836a twice: first with the address of the field at offset
 *   0x14, and second with the pointer value stored at offset 0xc. The function acts as a
 *   small wrapper that forwards the same two arguments to a callee for two related sub-
 *   objects. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_pointers_10484a28(int param_1,uint32_t param_2,int param_3)

{
  store_value_at_offset_1042836a(param_1 + 0x14,param_2,param_3);
  store_value_at_offset_1042836a(*(int *)(param_1 + 0xc),param_2,param_3);
  return;
}
