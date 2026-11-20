/* @k10d execute_two_stage_operation_104dcce2 @ 0x104dcce2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Performs a primary operation with a retry loop, followed by a secondary operation,
 *   managing two temporary object lifetimes.
 * summary:
 *   The function allocates a temporary object (cls_105bb0b8) and calls
 *   check_two_conditions_and_return_flag. If successful, it enters a do-while loop calling
 *   dispatch_on_string_lookup until it returns 0. It then calls
 *   return_one_constant_104dd416; if that returns non-zero, it allocates a second temporary
 *   object and calls check_and_process_two_params. Both temporary objects are destroyed via
 *   their virtual slot 1 (likely a destructor or cleanup) before returning 1 on success or
 *   0 on failure. The specific camera subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t execute_two_stage_operation_104dcce2(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_48,(char *)0x105badc4/*ROM*/);
  if (iVar1 != 0) {
    do {
      iVar1 = dispatch_on_string_lookup(param_1,param_2,param_3);
    } while (iVar1 != 0);
    iVar1 = return_one_constant_104dd416(param_1,param_3);
    if (iVar1 != 0) {
      cls_105bb0b8_new(&cStack_28);
      iVar1 = check_and_process_two_params(param_2,&cStack_28,(char *)0x105badd4/*ROM*/);
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
