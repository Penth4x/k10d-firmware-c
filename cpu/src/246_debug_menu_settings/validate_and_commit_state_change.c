/* @k10d validate_and_commit_state_change @ 0x104d8134
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Validates a state transition by checking a flag and comparing a computed value against
 *   a baseline.
 * summary:
 *   The function first calls return_r4_passthrough_104d800e and adjust_pointer_by_offset,
 *   then invokes clear_struct_fields_104d7c58. It checks a condition using
 *   invoke_virtual_slot_seven_104d6900 with an offset of 0x2b1c. If valid, it calls
 *   dispatch_event_with_status_check and dispatch_virtual_method_on_param. It compares the
 *   result of dispatch_virtual_method_on_param with a value from a function pointer at
 *   0x104d689e. If they match, it calls add_offset_by_flag and a function pointer at
 *   0x104d7eda, returning 1 if the latter returns 0, otherwise 0. Returns 0 on any failure
 *   path.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_and_commit_state_change(int param_1)

{
  uint32_t uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = return_r4_passthrough_104d800e();
  pvVar2 = (void *)adjust_pointer_by_offset(uVar1,1);
  clear_struct_fields_104d7c58(pvVar2);
  uVar1 = return_r4_passthrough_104d800e();
  iVar3 = invoke_virtual_slot_seven_104d6900(uVar1,param_1 + 0x2b1c);
  if ((iVar3 != 0) && (iVar3 = dispatch_event_with_status_check(param_1,param_1 + 0x2b1c), iVar3 != 0)) {
    return_r4_passthrough_104d800e();
    iVar3 = (*(code *)0x104d689e/*ROM*/)();
    iVar4 = dispatch_virtual_method_on_param(param_1);
    if (iVar4 != 0) {
      return_r4_passthrough_104d800e();
      iVar4 = (*(code *)0x104d689e/*ROM*/)();
      if (iVar4 == iVar3) {
        uVar1 = return_r4_passthrough_104d800e();
        add_offset_by_flag(uVar1,1);
        iVar3 = (*(code *)0x104d7eda/*ROM*/)();
        if (iVar3 == 0) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}
