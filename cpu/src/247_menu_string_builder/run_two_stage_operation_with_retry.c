/* @k10d run_two_stage_operation_with_retry @ 0x104dc2ec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Executes a primary operation with a retry loop, then conditionally runs a secondary
 *   operation, managing two temporary objects.
 * summary:
 *   The function creates a temporary object (auStack_48) and calls
 *   check_two_conditions_and_return_flag. If that succeeds, it enters a do-while loop
 *   calling dispatch_seven_branches_on_lookup until it returns 0. It then calls
 *   check_four_conditions_in_sequence; if that returns non-zero, it creates a second
 *   temporary object (auStack_28), calls check_and_process_two_params, and if that
 *   succeeds, destroys both objects and returns 1. Otherwise, it destroys the first object
 *   and returns 0. The callees reset_vtable_and_free_if_flagged_104ddfe6 are verified
 *   virtual method slot 1 of cls_105bb0b8, likely a destructor or cleanup method. The
 *   specific camera subsystem is not identifiable from the provided pseudocode and callee
 *   names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t run_two_stage_operation_with_retry(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_48,(char *)0x105bac28/*ROM*/);
  if (iVar1 != 0) {
    do {
      iVar1 = dispatch_seven_branches_on_lookup(param_1,param_2,param_3);
    } while (iVar1 != 0);
    iVar1 = check_four_conditions_in_sequence(param_1,param_3);
    if (iVar1 != 0) {
      cls_105bb0b8_new((void *)auStack_28);
      iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105bac3c/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
  return 0;
}
