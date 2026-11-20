/* @k10d run_two_stage_operation_104d98c2 @ 0x104d98c2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Executes a primary operation loop and a secondary operation, managing temporary object
 *   lifetimes.
 * summary:
 *   Creates a temporary object (cls_105bb0b8) and calls
 *   check_two_conditions_and_return_flag with a string pointer. If successful, it loops
 *   calling dispatch_event_by_type_104d9980 until it returns 0, then calls
 *   check_three_conditions_in_sequence. If that second call returns non-zero, it creates a
 *   second temporary object, calls check_and_process_two_params, and destroys both objects
 *   before returning 1. Otherwise, it destroys the first object and returns 0. The specific
 *   camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t run_two_stage_operation_104d98c2(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_48,(char *)0x105ba52c/*ROM*/);
  if (iVar1 != 0) {
    do {
      iVar1 = dispatch_event_by_type_104d9980(param_1,param_2,param_3);
    } while (iVar1 != 0);
    iVar1 = check_three_conditions_in_sequence(param_1,param_3);
    if (iVar1 != 0) {
      cls_105bb0b8_new(&cStack_28);
      iVar1 = check_and_process_two_params(param_2,&cStack_28,(char *)0x105ba544/*ROM*/);
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
