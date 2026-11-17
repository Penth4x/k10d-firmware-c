/* @k10d initialize_subsystem_with_fallback @ 0x104d837e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Initializes a subsystem by calling setup routines and falling back to alternative
 *   initialization paths if primary checks fail.
 * summary:
 *   The function calls return_r4_passthrough_104d800e and add_offset_to_pointer_104d6862,
 *   then invokes a function pointer at 0x104d7b3a. It attempts initialization via
 *   collect_status_into_stack_buffer, dispatch_event_with_status_check, or
 *   dispatch_virtual_method_on_param in sequence. If all fail, it returns 0; otherwise, it
 *   calls add_offset_by_flag and a function pointer at 0x104d7eda, returning 1 on success.
 *   The specific subsystem is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subsystem_with_fallback(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  return_r4_passthrough_104d800e();
  uVar1 = add_offset_to_pointer_104d6862(__frv_reg_unset(4));
  (*(code *)0x104d7b3a/*ROM*/)(uVar1,0,0);
  iVar2 = return_r4_passthrough_104d800e();
  iVar2 = collect_status_into_stack_buffer(iVar2,param_1 + 0x2b1c);
  if (((iVar2 == 0) || (iVar2 = dispatch_event_with_status_check(param_1,param_1 + 0x2b1c), iVar2 == 0)) ||
     (iVar2 = dispatch_virtual_method_on_param(param_1), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = return_r4_passthrough_104d800e();
    add_offset_by_flag(uVar1,1);
    iVar2 = (*(code *)0x104d7eda/*ROM*/)();
    uVar1 = 1;
    if (iVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
