/* @k10d call_two_helpers_with_param_1045bb2c @ 0x1045bb2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies the first parameter to a local and passes it to two unnamed helper functions.
 * summary:
 *   The function stores *param_1 into a stack variable and calls
 *   dereference_first_pointer_1045ba02 with a pointer to that local. It then calls
 *   get_pointer_offset_eight_1045ba2a with no arguments. No camera-specific behavior is
 *   evident from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_1045bb2c(uint32_t *param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = *param_1;
  dereference_first_pointer_1045ba02(&uStack_c);
  get_pointer_offset_eight_1045ba2a((int *)(uint32_t)param_1);
  return;
}
