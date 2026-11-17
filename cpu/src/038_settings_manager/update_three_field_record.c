/* @k10d update_three_field_record @ 0x10390e32
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes three parameters into a record and conditionally notifies based on a predicate.
 * summary:
 *   The function calls check_offset_c_nonzero_10390edc on the first argument; if true, it
 *   calls call_kernel_with_short_id on the fourth word of the record. It then stores
 *   param_2, param_3, and param_4 into the first three words of the record. It re-evaluates
 *   check_offset_c_nonzero_10390edc and, if true, calls check_kernel_call_success_10459d88
 *   on the fourth word. The specific roles of the record fields and the notification
 *   functions are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_three_field_record(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  bool bVar1;
  
  bVar1 = check_offset_c_nonzero_10390edc(param_1);
  if (bVar1) {
    call_kernel_with_short_id(param_1 + 3);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  bVar1 = check_offset_c_nonzero_10390edc(param_1);
  if (bVar1) {
    check_kernel_call_success_10459d88(param_1 + 3);
  }
  return;
}
