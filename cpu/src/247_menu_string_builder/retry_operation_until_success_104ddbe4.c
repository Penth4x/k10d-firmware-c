/* @k10d retry_operation_until_success_104ddbe4 @ 0x104ddbe4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Performs an operation with a retry loop and handles error cleanup via two object
 *   instances.
 * summary:
 *   The function constructs two instances of cls_105bb0b8 on the stack. It first calls
 *   check_two_conditions_and_return_flag; if successful, it enters a do-while loop calling
 *   dispatch_on_two_state_checks until it returns 0. It then calls
 *   return_constant_one_104ddfa2, and if that fails, it calls add_offset_to_param_104d6ef6
 *   and a function at 0x104d7a1a, then constructs a second object and calls
 *   check_and_process_two_params. If check_and_process_two_params succeeds, it calls
 *   reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1) on the second object.
 *   Finally, it calls reset_vtable_and_free_if_flagged_104ddfe6 on the first object and
 *   returns 0 on success or 1 on specific failure paths. The pattern suggests a state
 *   machine or transaction with retry logic and resource cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t retry_operation_until_success_104ddbe4(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_48,(char *)0x105baff8/*ROM*/);
  if (iVar1 != 0) {
    do {
      iVar1 = dispatch_on_two_state_checks(param_1,param_2,param_3);
    } while (iVar1 != 0);
    iVar1 = return_constant_one_104ddfa2(param_1,param_3);
    if (iVar1 != 0) {
      uVar2 = add_offset_to_param_104d6ef6(param_3);
      (*(code *)0x104d7a1a/*ROM*/)(uVar2,1);
      cls_105bb0b8_new(&cStack_28);
      iVar1 = check_and_process_two_params(param_2,&cStack_28,(char *)0x105bb004/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
  return 0;
}
