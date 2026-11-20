/* @k10d process_three_stage_operation @ 0x104dde1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Executes a three-stage operation on param_2, conditionally processing param_3 based on
 *   intermediate results.
 * summary:
 *   The function initializes three instances of class cls_105bb0b8 on the stack. It calls
 *   check_two_conditions_and_return_flag with the first instance and a string pointer; if
 *   successful, it proceeds to call check_flag_and_call_helper_104de66e. If that also
 *   succeeds, it calls add_offset_by_flag and a virtual method. If
 *   check_flag_and_call_helper_104de66e fails, it calls copy_second_word_and_return_first
 *   to get a status, and if that status is non-zero, it calls add_offset_to_param_104d6ef6
 *   and forward_two_params_to_helper_104d79f0, then initializes a third instance and calls
 *   check_and_process_two_params. All instances are cleaned up via
 *   reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1) before returning 0 or 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_three_stage_operation(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_6c;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  int iStack_c;
  
  cls_105bb0b8_new(&cStack_6c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_6c,(char *)0x105bb040/*ROM*/);
  if (iVar1 == 0) goto LAB_104ddefc;
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_flag_and_call_helper_104de66e(param_2);
  if (iVar1 == 0) {
LAB_104dde96:
    uVar2 = add_offset_by_flag(param_3,0);
    (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
  }
  else {
    iStack_c = 0;
    (*(code *)0x104de4e6/*ROM*/)(&cStack_4c,&iStack_c);
    if (iStack_c == 0) goto LAB_104dde96;
    iVar1 = add_offset_to_param_104d6ef6(param_3);
    forward_two_params_to_helper_104d79f0(iVar1,&cStack_4c);
    cls_105bb0b8_new(&cStack_2c);
    iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105bb04c/*ROM*/);
    if (iVar1 != 0) {
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_6c,2);
      return 1;
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
LAB_104ddefc:
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_6c,2);
  return 0;
}
