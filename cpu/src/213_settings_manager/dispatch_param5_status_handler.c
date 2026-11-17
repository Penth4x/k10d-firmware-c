/* @k10d dispatch_param5_status_handler @ 0x104aee8a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status code from param_5 and calls one of several handler functions on param_1
 *   based on the result.
 * summary:
 *   The function first validates that param_3 and param_5 are non-null; if not, it calls
 *   zero_struct_fields_20_to_30_104aef4a and returns 0. Otherwise it calls
 *   check_status_or_field_condition on param_5 to get a status code. If the code is 0, it
 *   calls call_virtual_method_on_object_104af572 with the remaining parameters; on success
 *   it calls invoke_virtual_slot_two_104ae294 and returns 1, otherwise it calls
 *   zero_struct_fields_20_to_30_104aef4a and returns 0. For non-zero status codes (3, 8, 6,
 *   or other), it calls zero_struct_fields_20_to_30_104aef4a followed by a specific handler
 *   (invoke_virtual_slot_two_104ae334, invoke_virtual_slot_two_104ae2e4,
 *   invoke_virtual_slot_two_104ae30c, or invoke_virtual_slot_two_104ae3d4) and returns 0.
 *   The caller is a virtual method slot 3 of class cls_105b77e8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
dispatch_param5_status_handler(void *param_1,uint32_t param_2,int param_3,uint32_t param_4,int *param_5)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_3 == 0) || (param_5 == (int *)0x0)) {
    zero_struct_fields_20_to_30_104aef4a(param_1);
    uVar2 = 0;
  }
  else {
    iVar1 = check_status_or_field_condition((int)param_5);
    if (iVar1 == 0) {
      iVar1 = call_virtual_method_on_object_104af572(param_5,param_2,param_4,param_3);
      if (iVar1 == 0) {
        invoke_virtual_slot_two_104ae294(param_1);
        uVar2 = 1;
      }
      else {
        zero_struct_fields_20_to_30_104aef4a(param_1);
        uVar2 = 0;
      }
    }
    else if (iVar1 == 3) {
      zero_struct_fields_20_to_30_104aef4a(param_1);
      invoke_virtual_slot_two_104ae334(param_1);
      uVar2 = 0;
    }
    else if (iVar1 == 8) {
      zero_struct_fields_20_to_30_104aef4a(param_1);
      invoke_virtual_slot_two_104ae2e4(param_1);
      uVar2 = 0;
    }
    else if (iVar1 == 6) {
      zero_struct_fields_20_to_30_104aef4a(param_1);
      invoke_virtual_slot_two_104ae30c(param_1);
      uVar2 = 0;
    }
    else {
      zero_struct_fields_20_to_30_104aef4a(param_1);
      invoke_virtual_slot_two_104ae3d4((int)param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}
