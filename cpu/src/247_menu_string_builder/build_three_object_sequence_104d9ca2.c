/* @k10d build_three_object_sequence_104d9ca2 @ 0x104d9ca2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructs three cls_105bb0b8 objects from param_2 and param_3, linking them via helper
 *   calls.
 * summary:
 *   Instantiates three cls_105bb0b8 objects on the stack. Calls
 *   check_two_conditions_and_return_flag, check_flag_and_call_helper_104de66e, and
 *   check_and_process_two_params with param_2 and specific string pointers (0x105ba5ec,
 *   0x105ba604) to initialize the objects. Uses adjust_pointer_by_offset and
 *   call_helper_with_offset_arg_104d7d34 to process param_3 and link the objects. Returns 1
 *   on success, 0 on failure, cleaning up objects via
 *   reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1) in all exit paths.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_three_object_sequence_104d9ca2(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_68;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_68);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_68,(char *)0x105ba5ec/*ROM*/);
  if (iVar1 != 0) {
    cls_105bb0b8_new(&cStack_48);
    iVar1 = check_flag_and_call_helper_104de66e(param_2);
    if (iVar1 != 0) {
      iVar1 = adjust_pointer_by_offset(param_3,1);
      call_helper_with_offset_arg_104d7d34(iVar1,&cStack_48);
      uVar2 = adjust_pointer_by_offset(param_3,1);
      (*(code *)0x104d7d56/*ROM*/)(uVar2,1);
      cls_105bb0b8_new(&cStack_28);
      iVar1 = check_and_process_two_params(param_2,&cStack_28,(char *)0x105ba604/*ROM*/);
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
