/* @k10d execute_two_stage_operation_104dafd0 @ 0x104dafd0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Performs a primary operation with retry, followed by a secondary operation, managing
 *   temporary object lifetimes.
 * summary:
 *   The function allocates a temporary object (cls_105bb0b8) and calls
 *   check_two_conditions_and_return_flag. If successful, it loops calling
 *   dispatch_eight_state_handlers until it returns 0. It then calls
 *   check_four_conditions_in_order; if that also succeeds, it allocates a second temporary
 *   object and calls check_and_process_two_params. Both temporary objects are destroyed via
 *   their virtual destructor (slot 1) before returning. The function returns 1 if the
 *   secondary path was fully executed, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t execute_two_stage_operation_104dafd0(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_48,(char *)0x105ba964/*ROM*/);
  if (iVar1 != 0) {
    do {
      iVar1 = dispatch_eight_state_handlers(param_1,param_2,param_3);
    } while (iVar1 != 0);
    iVar1 = check_four_conditions_in_order(param_1,param_3);
    if (iVar1 != 0) {
      cls_105bb0b8_new(&cStack_28);
      iVar1 = check_and_process_two_params(param_2,&cStack_28,(char *)0x105ba974/*ROM*/);
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
