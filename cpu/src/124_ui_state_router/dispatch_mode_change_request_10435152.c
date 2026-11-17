/* @k10d dispatch_mode_change_request_10435152 @ 0x10435152
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Validates a mode change parameter and dispatches it to a handler or state setter.
 * summary:
 *   The function takes a mode identifier in param_3 and routes it based on its value. For
 *   values 1, 2, and 3, it calls initialize_object_field_with_value with a mapped index.
 *   For 0 and other values, it queries check_setting_0x99_enabled and conditionally calls
 *   either initialize_object_field_with_value or set_field_at_offset_0x14_1043506a. It
 *   always returns 1, indicating success or completion of the dispatch logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_change_request_10435152(uint32_t param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 1) {
    iVar2 = 1;
  }
  else if (param_3 == 2) {
    iVar2 = 2;
  }
  else {
    if (param_3 == 3) {
      iVar2 = 1;
LAB_104351b0:
      initialize_object_field_with_value(param_1,param_2,iVar2);
      return 1;
    }
    if (param_3 == 0) {
      iVar1 = check_setting_0x99_enabled(param_1);
      iVar2 = 0;
      if (iVar1 != 0) goto LAB_104351b0;
    }
    else {
      iVar2 = check_setting_0x99_enabled(param_1);
      if (iVar2 != 0) {
        iVar2 = 1;
        goto LAB_104351b0;
      }
      iVar2 = 3;
    }
  }
  set_field_at_offset_0x14_1043506a(param_1,(int)param_2,iVar2);
  return 1;
}
