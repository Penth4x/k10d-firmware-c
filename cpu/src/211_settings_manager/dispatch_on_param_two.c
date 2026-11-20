/* @k10d dispatch_on_param_two @ 0x104ac66e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls one of two helpers based on whether param_2 is zero, then returns the value at
 *   offset 0x34 of param_1.
 * summary:
 *   The function branches on param_2: if it is 0 it calls wait_for_flag_clear_with_timeout
 *   with param_1, otherwise it calls update_object_state_and_dispatch_104ac69a with param_1
 *   and param_3. It then returns the 32-bit value stored at param_1 + 0x34. The callees are
 *   unnamed, so the specific subsystem role is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_param_two(cls_105b72e0 *param_1,int param_2,uint32_t param_3)

{
  if (param_2 == 0) {
    wait_for_flag_clear_with_timeout((uint32_t)param_1);
  }
  else {
    update_object_state_and_dispatch_104ac69a((uint32_t)param_1,param_3);
  }
  return param_1->field_0x34;
}
