/* @k10d dispatch_mode_init_sequence @ 0x103970be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects an initialization path based on a status code and calls a final handler with a
 *   result flag.
 * summary:
 *   The function calls get_or_init_sram_object_103973c4 and
 *   call_function_at_offset_8_10397540 to obtain a status value. If the status is 0, it
 *   calls get_or_init_global_object_103964f8 and call_subroutine_with_offset_arg_1039672c;
 *   if 1, it calls get_or_init_singleton_1039201c and
 *   call_function_with_offset_arg_10392276. It then calls get_value_from_object,
 *   add_offset_to_pointer_104df392, return_r4_passthrough_104d800e, and
 *   add_offset_to_pointer_104d6882. Finally, it calls a function at 0x104d8aec and passes
 *   its result along with a flag (1 or 2) to a function at 0x104d5a0e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_init_sequence(uint32_t param_x0)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = get_or_init_sram_object_103973c4();
  iVar1 = call_function_at_offset_8_10397540(iVar1);
  if (iVar1 == 0) {
    iVar1 = get_or_init_global_object_103964f8();
    iVar4 = call_subroutine_with_offset_arg_1039672c(iVar1);
  }
  else if (iVar1 == 1) {
    iVar1 = get_or_init_singleton_1039201c();
    iVar4 = call_function_with_offset_arg_10392276(iVar1);
  }
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  return_r4_passthrough_104d800e();
  add_offset_to_pointer_104d6882(__frv_reg_unset(4));
  if (iVar4 == 0) {
    uVar2 = (*(code *)0x104d8aec/*ROM*/)();
    uVar3 = 1;
  }
  else {
    uVar2 = (*(code *)0x104d8aec/*ROM*/)();
    uVar3 = 2;
  }
  (*(code *)0x104d5a0e/*ROM*/)(uVar2,uVar3);
  return;
}
