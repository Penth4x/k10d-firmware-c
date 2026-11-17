/* @k10d call_single_helper_1045c0f2 @ 0x1045c0f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Calls read_first_word_1045bd4c with the given pointer and returns its result unchanged.
 * summary:
 *   A one-line wrapper that forwards its single pointer argument to
 *   read_first_word_1045bd4c and returns the callee's return value in r4. No local state is
 *   modified and no other side effects are visible. The role of the underlying helper is
 *   unknown, so this function's behavior is purely pass-through.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_1045c0f2(uint32_t *param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_first_word_1045bd4c(param_1);
  return uVar1;
}
