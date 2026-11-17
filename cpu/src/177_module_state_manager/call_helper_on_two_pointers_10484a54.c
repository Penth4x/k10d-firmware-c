/* @k10d call_helper_on_two_pointers_10484a54 @ 0x10484a54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on two pointers derived from a struct at offsets 0x14 and 0xc.
 * summary:
 *   The function takes a base pointer in param_1 and forwards param_2 and param_3 to
 *   store_value_at_offset_1042837e twice. The first call uses the pointer at offset 0x14 of
 *   the struct, and the second uses the pointer stored at offset 0xc. It acts as a small
 *   wrapper that applies the same operation to two related sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_pointers_10484a54(int param_1,uint32_t param_2,int param_3)

{
  store_value_at_offset_1042837e(param_1 + 0x14,param_2,param_3);
  store_value_at_offset_1042837e(*(int *)(param_1 + 0xc),param_2,param_3);
  return;
}
