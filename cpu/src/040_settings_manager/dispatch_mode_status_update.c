/* @k10d dispatch_mode_status_update @ 0x10397044
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a mode state, selects a handler based on the result, and invokes a final
 *   callback with the computed status.
 * summary:
 *   The function calls get_or_init_sram_object_103973c4 and
 *   call_function_at_offset_8_10397540 to determine a state value. If the state is 0, it
 *   calls get_or_init_global_object_103964f8 and call_subroutine_with_offset_arg_1039671c;
 *   if 1, it calls get_or_init_singleton_1039201c and
 *   call_function_with_offset_arg_10392240. It then calls get_value_from_object,
 *   add_offset_to_pointer_104df392, and return_r4_passthrough_104d800e before invoking a
 *   function pointer at 0x104d8ac4 with the result from add_offset_to_pointer_104d6882 and
 *   the previously computed status. The specific camera subsystem is not identifiable from
 *   the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_status_update(uint32_t param_x0)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 1;
  iVar1 = get_or_init_sram_object_103973c4();
  iVar1 = call_function_at_offset_8_10397540(iVar1);
  if (iVar1 == 0) {
    iVar1 = get_or_init_global_object_103964f8();
    uVar3 = call_subroutine_with_offset_arg_1039671c(iVar1);
  }
  else if (iVar1 == 1) {
    iVar1 = get_or_init_singleton_1039201c();
    uVar3 = call_function_with_offset_arg_10392240(iVar1);
  }
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  return_r4_passthrough_104d800e();
  uVar2 = add_offset_to_pointer_104d6882(__frv_reg_unset(4));
  (*(code *)0x104d8ac4/*ROM*/)(uVar2,uVar3);
  return;
}
