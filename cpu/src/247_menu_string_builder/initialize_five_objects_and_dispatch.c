/* @k10d initialize_five_objects_and_dispatch @ 0x104dd16c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Instantiates five cls_105bb0b8 objects, initializes them via helper functions, and
 *   dispatches a result based on success or failure.
 * summary:
 *   The function allocates five stack-based instances of cls_105bb0b8. It calls a series of
 *   initialization functions (check_two_conditions_and_return_flag,
 *   check_flag_and_call_helper_104de66e, scan_byte_array_for_value) passing these objects
 *   and parameters. Depending on the return values, it either calls a success handler
 *   (0x104d7eb2) or a failure handler (0x104d7b3a/0x104d7b56) which may involve further
 *   initialization (check_and_process_two_params). Finally, it cleans up all instantiated
 *   objects by calling their virtual destructor (slot 1) via
 *   reset_vtable_and_free_if_flagged_104ddfe6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_five_objects_and_dispatch(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t auStack_a8 [32];
  uint8_t auStack_88 [32];
  uint8_t auStack_68 [32];
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_a8);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_a8,(char *)0x105bae54/*ROM*/);
  if (iVar1 != 0) {
    cls_105bb0b8_new((void *)auStack_88);
    iVar1 = check_flag_and_call_helper_104de66e(param_2);
    if (iVar1 != 0) {
      cls_105bb0b8_new((void *)auStack_68);
      cls_105bb0b8_new((void *)auStack_48);
      iVar1 = scan_byte_array_for_value((void *)auStack_88,(void *)auStack_68,0x2f);
      if ((iVar1 == 0) || (iVar1 = scan_byte_array_for_value((void *)auStack_88,(void *)auStack_48,0x2f), iVar1 == 0)) {
        uVar2 = add_offset_by_flag(param_3,0);
        (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
      }
      else {
        uVar2 = add_offset_to_pointer_104d6862(param_3);
        uVar3 = call_helper_with_ten_arg();
        uVar4 = call_helper_with_ten_arg();
        (*(code *)0x104d7b3a/*ROM*/)(uVar2,uVar3,uVar4);
        uVar2 = add_offset_to_pointer_104d6862(param_3);
        (*(code *)0x104d7b56/*ROM*/)(uVar2,1);
        cls_105bb0b8_new((uint32_t *)__frv_reg_unset(4));
        iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105bae60/*ROM*/);
        if (iVar1 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_68,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_88,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_a8,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_68,2);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_88,2);
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_a8,2);
  return 0;
}
