/* @k10d build_three_object_sequence_104d9ba8 @ 0x104d9ba8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructs three cls_105bb0b8 objects in sequence, passing each to helper functions
 *   before destroying them.
 * summary:
 *   The function allocates three stack-based objects of class cls_105bb0b8. It initializes
 *   the first with check_two_conditions_and_return_flag, the second with
 *   check_flag_and_call_helper_104de66e, and the third with check_and_process_two_params,
 *   using string pointers at 0x105ba5d4 and 0x105ba5e0. Between initializations, it calls
 *   adjust_pointer_by_offset twice with param_3 and passes the results to
 *   call_helper_with_offset_arg_104d7d02 and a function at 0x104d7d24. Each object is
 *   destroyed via the virtual method at 0x104ddfe6 (slot 1) in reverse order of creation.
 *   Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_three_object_sequence_104d9ba8(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_68 [32];
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_68);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_68,(char *)0x105ba5d4/*ROM*/);
  if (iVar1 != 0) {
    cls_105bb0b8_new((void *)auStack_48);
    iVar1 = check_flag_and_call_helper_104de66e(param_2);
    if (iVar1 != 0) {
      iVar1 = adjust_pointer_by_offset(param_3,1);
      call_helper_with_offset_arg_104d7d02(iVar1,auStack_48);
      uVar2 = adjust_pointer_by_offset(param_3,1);
      (*(code *)0x104d7d24/*ROM*/)(uVar2,1);
      cls_105bb0b8_new((void *)auStack_28);
      iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105ba5e0/*ROM*/);
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
