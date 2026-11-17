/* @k10d init_three_objects_with_params_104d9e96 @ 0x104d9e96
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructs three cls_105bb0b8 objects on the stack, initializing them via helper
 *   functions and linking them together.
 * summary:
 *   The function allocates three instances of cls_105bb0b8 on the stack. It initializes the
 *   first using check_two_conditions_and_return_flag, the second using
 *   check_flag_and_call_helper_104de66e, and the third using check_and_process_two_params.
 *   It also calls adjust_pointer_by_offset twice and call_subroutine_with_offset_104d7d98
 *   to establish relationships between the objects. If any initialization step fails, it
 *   cleans up the previously created objects via their virtual destructor (slot 1) and
 *   returns 0; otherwise, it returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_objects_with_params_104d9e96(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_68 [32];
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_68);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_68,(char *)0x105ba634/*ROM*/);
  if (iVar1 != 0) {
    cls_105bb0b8_new((void *)auStack_48);
    iVar1 = check_flag_and_call_helper_104de66e(param_2);
    if (iVar1 != 0) {
      iVar1 = adjust_pointer_by_offset(param_3,1);
      call_subroutine_with_offset_104d7d98(iVar1,auStack_48);
      uVar2 = adjust_pointer_by_offset(param_3,1);
      (*(code *)0x104d7dba/*ROM*/)(uVar2,1);
      cls_105bb0b8_new((void *)auStack_28);
      iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105ba640/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_68,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_68,2);
  return 0;
}
