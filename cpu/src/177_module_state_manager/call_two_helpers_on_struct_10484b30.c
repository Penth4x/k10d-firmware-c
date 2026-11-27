/* @k10d call_two_helpers_on_struct_10484b30 @ 0x10484b30
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes copy_words_to_struct_offset_10428474 twice on fields of a struct passed in
 *   param_1.
 * summary:
 *   The function takes a struct pointer in param_1 and calls
 *   copy_words_to_struct_offset_10428474 with param_1+0x14 as the first argument. It then
 *   calls copy_words_to_struct_offset_10428474 again using the value stored at param_1+0xc
 *   as the first argument, passing param_2, param_3, and param_4 as the remaining
 *   arguments. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_struct_10484b30(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)
{
  copy_words_to_struct_offset_10428474(param_1 + 0x14, (uint32_t)param_2, (uint32_t)param_3, (uint32_t)param_4);
  copy_words_to_struct_offset_10428474(*(uint32_t *)(param_1 + 0xc),param_2,param_3,param_4);
  return;
}
