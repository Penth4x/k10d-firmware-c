/* @k10d init_three_objects_and_dispatch_104dbc5e @ 0x104dbc5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructs three cls_105bb0b8 objects, initializes them via helper functions, and
 *   dispatches actions based on success/failure.
 * summary:
 *   The function allocates three stack-based objects of class cls_105bb0b8. It calls
 *   check_two_conditions_and_return_flag to initialize the first; if successful, it
 *   initializes the second via check_flag_and_call_helper_104de66e. Depending on the result
 *   of check_flag_and_call_helper_104de66e, it either calls a virtual method on a value
 *   derived from param_3 or initializes a third object via check_and_process_two_params.
 *   All objects are destroyed via the virtual destructor (slot 1) in a nested cleanup
 *   pattern. Returns 1 on failure of the third initialization, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_objects_and_dispatch_104dbc5e(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_68 [32];
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_68);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_68,(char *)0x105bab5c/*ROM*/);
  if (iVar1 != 0) {
    cls_105bb0b8_new((void *)auStack_48);
    iVar1 = check_flag_and_call_helper_104de66e(param_2);
    if (iVar1 == 0) {
      uVar2 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
    }
    else {
      iVar1 = add_offset_to_pointer_104d6862(param_3);
      forward_two_args_to_helper_104d7af0(iVar1,auStack_48);
      uVar2 = add_offset_to_pointer_104d6862(param_3);
      (*(code *)0x104d7b0a/*ROM*/)(uVar2,1);
      cls_105bb0b8_new((void *)auStack_28);
      iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105bab68/*ROM*/);
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
