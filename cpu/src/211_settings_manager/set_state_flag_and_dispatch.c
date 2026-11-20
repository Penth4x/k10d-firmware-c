/* @k10d set_state_flag_and_dispatch @ 0x104ac2da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a state flag at offset 0x34 of an object and calls a helper based on a boolean
 *   parameter.
 * summary:
 *   Checks if the integer at param_1 + 0x34 is zero. If so, it sets this field to 0 and
 *   calls call_seventh_vtable_slot if param_2 is 0, or sets it to 1 and calls
 *   store_and_dispatch_buffer_update with param_1 and param_3 if param_2 is non-zero.
 *   Returns 4, 1, or 5 depending on the path taken. The callees are unnamed, so the
 *   specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_state_flag_and_dispatch(cls_105b7288 *param_1,int param_2,int *param_3)

{
  uint32_t uVar1;
  
  if (param_1->field_0x34 == 0) {
    if (param_2 == 0) {
      param_1->field_0x34 = 0;
      uVar1 = 4;
      call_seventh_vtable_slot(__frv_reg_unset(4));
    }
    else {
      param_1->field_0x34 = 1;
      store_and_dispatch_buffer_update((int)param_1,param_3);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}
