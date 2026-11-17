/* @k10d call_two_helpers_with_zeroed_pair @ 0x1046c9a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a local 4-byte zeroed pair and passes it to two consecutive helper
 *   functions.
 * summary:
 *   The function sets up a local 4-byte structure (auStack_10/uStack_c) to zero. It then
 *   calls convert_ms_to_fixed_point with param_1, the zeroed structure, and param_2.
 *   Finally, it calls call_helper_with_two_word_struct with param_1 and the same structure.
 *   The role of the helpers is unknown, so the function acts as a wrapper for this specific
 *   sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_zeroed_pair(uint32_t param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint16_t auStack_10 [2];
  uint32_t uStack_c;
  
  auStack_10[0] = 0;
  uStack_c = 0;
  convert_ms_to_fixed_point(param_1,auStack_10,param_2);
  call_helper_with_two_word_struct(param_1,auStack_10);
  return;
}
