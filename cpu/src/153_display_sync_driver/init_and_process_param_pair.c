/* @k10d init_and_process_param_pair @ 0x1046cc48
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a local struct to zero, passes it to a helper, then processes it with a
 *   second parameter.
 * summary:
 *   The function sets up a 4-byte local structure (auStack_10) with zero values. It calls
 *   query_two_word_result with the first argument and this local structure, likely to
 *   populate or initialize it. It then calls compare_structured_records with the first
 *   argument, the local structure, and the second argument, returning the result of this
 *   second call. The specific roles of the callees are unknown, so the function acts as a
 *   wrapper for this two-step initialization and processing sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_and_process_param_pair(uint32_t param_1,void *param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint16_t auStack_10 [2];
  uint32_t uStack_c;
  
  auStack_10[0] = 0;
  uStack_c = 0;
  query_two_word_result(param_1,auStack_10);
  uVar1 = compare_structured_records(param_1,auStack_10,param_2);
  return uVar1;
}
