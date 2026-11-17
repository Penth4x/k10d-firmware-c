/* @k10d call_helper_on_two_object_fields @ 0x104848e8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on two 32-bit fields of a struct passed as the first argument.
 * summary:
 *   The function takes a struct pointer (param_1) and a value (param_2). It calls
 *   write_fill_pattern_word_104282a4 twice: first with the field at offset 0x14 and
 *   param_2, then with the field at offset 0xc and param_2. The role of
 *   write_fill_pattern_word_104282a4 is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_object_fields(int param_1,int param_2)

{
  write_fill_pattern_word_104282a4((uint32_t *)(param_1 + 0x14),param_2);
  write_fill_pattern_word_104282a4(*(uint32_t **)(param_1 + 0xc),param_2);
  return;
}
