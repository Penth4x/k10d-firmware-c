/* @k10d call_two_helpers_with_param_1045bba2 @ 0x1045bba2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies the first word of param_1 onto the stack and passes it to two unnamed helper
 *   functions.
 * summary:
 *   The function reads *param_1 into a local variable, calls
 *   dereference_first_pointer_1045ba7c with a pointer to that local, then calls
 *   get_pointer_offset_eight_1045baa4 with no arguments. No camera-specific behavior is
 *   evident from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_1045bba2(uint32_t *param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = *param_1;
  dereference_first_pointer_1045ba7c(&uStack_c);
  get_pointer_offset_eight_1045baa4((int *)(uint32_t)param_1);
  return;
}
