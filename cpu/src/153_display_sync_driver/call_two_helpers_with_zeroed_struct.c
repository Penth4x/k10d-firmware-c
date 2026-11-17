/* @k10d call_two_helpers_with_zeroed_struct @ 0x1046cab2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a small local struct to zero and passes it to two helper functions along
 *   with the input parameters.
 * summary:
 *   The function sets up a 6-byte local structure (auStack_10/uStack_c) with zero values.
 *   It then calls query_two_word_result with param_1 and the zeroed struct, followed by
 *   convert_time_to_ticks with param_1, param_2, and the struct. The role of the helpers
 *   and the specific data being manipulated is not determinable from the provided
 *   pseudocode and unknown callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_zeroed_struct(uint32_t param_1,void *param_2)

{
  uintptr_t sp;
  uint16_t auStack_10 [2];
  uint32_t uStack_c;
  
  auStack_10[0] = 0;
  uStack_c = 0;
  query_two_word_result(param_1,auStack_10);
  convert_time_to_ticks(param_1,param_2,auStack_10);
  return;
}
