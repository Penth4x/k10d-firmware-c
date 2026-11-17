/* @k10d dispatch_on_two_state_checks @ 0x104ddcb0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, runs two state checks, and dispatches to one of three
 *   handlers based on the results.
 * summary:
 *   Instantiates a cls_105bb0b8 object on the stack and calls call_helper_with_saved_field
 *   with param_2. If that returns 0, it calls the virtual method slot 1
 *   (reset_vtable_and_free_if_flagged_104ddfe6) with argument 2 and returns 0. Otherwise,
 *   it performs two sequential checks via validate_and_copy_string against constants
 *   0x105bb010 and 0x105bb01c. Depending on which check fails or succeeds, it calls one of
 *   three handlers (try_two_step_operation, process_three_stage_operation, or
 *   process_event_with_two_class_lookups) with the input parameters, then cleans up the
 *   object via reset_vtable_and_free_if_flagged_104ddfe6 and returns the handler's result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_two_state_checks(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_28);
  iVar1 = call_helper_with_saved_field(param_2,auStack_28);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
    uVar2 = 0;
  }
  else {
    iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105bb010/*ROM*/);
    if (iVar1 == 0) {
      iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105bb01c/*ROM*/);
      if (iVar1 == 0) {
        uVar2 = try_two_step_operation(param_1,param_2);
      }
      else {
        uVar2 = process_three_stage_operation(param_1,param_2,param_3);
      }
    }
    else {
      uVar2 = process_event_with_two_class_lookups(param_1,param_2,param_3);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
  }
  return uVar2;
}
