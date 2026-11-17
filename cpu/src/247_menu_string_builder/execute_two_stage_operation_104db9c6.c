/* @k10d execute_two_stage_operation_104db9c6 @ 0x104db9c6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Performs a two-stage operation with retry logic, initializing and cleaning up temporary
 *   objects.
 * summary:
 *   The function creates a temporary object (cls_105bb0b8) and calls
 *   check_two_conditions_and_return_flag. If successful, it loops calling
 *   dispatch_on_property_lookup until it returns 0, then calls
 *   return_constant_one_104dc0f8. If that second step fails, it creates a second temporary
 *   object and calls check_and_process_two_params. It cleans up the temporary objects via
 *   reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1) and returns 1 on success or
 *   0 on failure. The specific camera subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t execute_two_stage_operation_104db9c6(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_48,(char *)0x105baaf4/*ROM*/);
  if (iVar1 != 0) {
    do {
      iVar1 = dispatch_on_property_lookup(param_1,param_2,param_3);
    } while (iVar1 != 0);
    iVar1 = return_constant_one_104dc0f8(param_1,param_3);
    if (iVar1 != 0) {
      cls_105bb0b8_new((void *)auStack_28);
      iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105bab04/*ROM*/);
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
