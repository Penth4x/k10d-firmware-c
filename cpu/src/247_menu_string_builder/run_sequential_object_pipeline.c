/* @k10d run_sequential_object_pipeline @ 0x104dbe50
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructs a chain of cls_105bb0b8 objects, runs them through a series of unverified
 *   helper functions, and cleans up on exit.
 * summary:
 *   The function allocates five stack-based objects of class cls_105bb0b8. It calls a
 *   sequence of unverified functions (check_two_conditions_and_return_flag,
 *   check_flag_and_call_helper_104de66e, scan_byte_array_for_value) that appear to
 *   configure or process these objects, using param_2 and param_3 as inputs. Depending on
 *   the success of these steps, it calls either add_offset_by_flag or a set of functions
 *   (add_offset_to_pointer_104d6862, call_helper_with_ten_arg) with indirect calls, and
 *   finally calls check_and_process_two_params. All objects are destroyed via the verified
 *   virtual method reset_vtable_and_free_if_flagged_104ddfe6 (slot 1) in a nested cleanup
 *   pattern. The specific camera subsystem is not identifiable from the available callee
 *   names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t run_sequential_object_pipeline(uint32_t param_1,void *param_2,uint32_t param_3)

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
  
  cls_105bb0b8_new((uint32_t *)auStack_a8);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_a8,(char *)0x105bab84/*ROM*/);
  if (iVar1 != 0) {
    cls_105bb0b8_new((uint32_t *)auStack_88);
    iVar1 = check_flag_and_call_helper_104de66e(param_2);
    if (iVar1 != 0) {
      cls_105bb0b8_new((uint32_t *)auStack_68);
      cls_105bb0b8_new((uint32_t *)auStack_48);
      iVar1 = scan_byte_array_for_value((uint32_t *)auStack_88,(uint32_t *)auStack_68,0x2f);
      if ((iVar1 == 0) || (iVar1 = scan_byte_array_for_value((uint32_t *)auStack_88,(uint32_t *)auStack_48,0x2f), iVar1 == 0)) {
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
        iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105bab90/*ROM*/);
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
