/* @k10d init_three_objects_with_params_104dcf7a @ 0x104dcf7a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructs three cls_105bb0b8 objects on the stack, initializes them via helper
 *   functions, and conditionally invokes virtual methods based on initialization success.
 * summary:
 *   The function allocates three stack-based objects of class cls_105bb0b8. It calls
 *   check_two_conditions_and_return_flag, check_flag_and_call_helper_104de66e, and
 *   check_and_process_two_params to initialize these objects with parameters derived from
 *   param_2 and param_3. Depending on the return values of these initializers, it calls
 *   virtual methods (slot 1 via reset_vtable_and_free_if_flagged_104ddfe6, and others via
 *   direct calls at 0x104d7eb2/0x104d7b0a) on the objects or intermediate values from
 *   add_offset_by_flag/add_offset_to_pointer_104d6862. Finally, it cleans up all three
 *   objects by calling their virtual destructor/teardown method (slot 1) and returns 0 on
 *   success or 1 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_objects_with_params_104dcf7a(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_68;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_68);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_68,(char *)0x105bae2c/*ROM*/);
  if (iVar1 != 0) {
    cls_105bb0b8_new(&cStack_48);
    iVar1 = check_flag_and_call_helper_104de66e(param_2);
    if (iVar1 == 0) {
      uVar2 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
    }
    else {
      iVar1 = add_offset_to_pointer_104d6862(param_3);
      forward_two_args_to_helper_104d7af0(iVar1,&cStack_48);
      uVar2 = add_offset_to_pointer_104d6862(param_3);
      (*(code *)0x104d7b0a/*ROM*/)(uVar2,1);
      cls_105bb0b8_new(&cStack_28);
      iVar1 = check_and_process_two_params(param_2,&cStack_28,(char *)0x105bae38/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_68,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_68,2);
  return 0;
}
