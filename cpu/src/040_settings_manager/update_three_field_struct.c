/* @k10d update_three_field_struct @ 0x10391b42
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a predicate on a struct, stores three new values into its first three words, and
 *   re-checks the predicate to trigger a follow-up action.
 * summary:
 *   The function calls check_offset_c_nonzero_10391bec on the first argument (a pointer to
 *   a 4-word struct) and, if true, calls call_kernel_with_short_id on the fourth word. It
 *   then overwrites the first three words of the struct with param_2, param_3, and param_4.
 *   It calls check_offset_c_nonzero_10391bec again and, if true, calls
 *   check_kernel_call_success_10459d88 on the fourth word. The specific roles of the
 *   predicate and the two follow-up functions are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_three_field_struct(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  bool bVar1;
  
  bVar1 = check_offset_c_nonzero_10391bec(param_1);
  if (bVar1) {
    call_kernel_with_short_id(param_1 + 3);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  bVar1 = check_offset_c_nonzero_10391bec(param_1);
  if (bVar1) {
    check_kernel_call_success_10459d88(param_1 + 3);
  }
  return;
}
